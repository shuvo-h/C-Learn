
#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *leftChild;
    Node *rightChild;
    Node(int value){
        data =value;
        leftChild = NULL;
        rightChild = NULL;
    }
};

void zigzag_order(Node* root){

    if (root == NULL){
        return;
    }

    stack<Node*> currentLevel;
    stack<Node*> nextLevel;


    currentLevel.push(root);
    bool L_to_R = true;
    while (!currentLevel.empty()) {
        Node* tempNode = currentLevel.top();
        currentLevel.pop();

        if (tempNode !=NULL) {
            cout << tempNode->data << " ";
            if (L_to_R) {
                if (tempNode->leftChild)
                    nextLevel.push(tempNode->leftChild);
                if (tempNode->rightChild)
                    nextLevel.push(tempNode->rightChild);
            }
            else {
                if (tempNode->rightChild)
                    nextLevel.push(tempNode->rightChild);
                if (tempNode->leftChild)
                    nextLevel.push(tempNode->leftChild);
            }
        }

        if (currentLevel.empty()) {
            L_to_R = !L_to_R;
            swap(currentLevel, nextLevel);
        }
    }
}

int main(){
    int a;
    cin>>a;
    Node* root = new Node(a);

    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *presentRoot = q.front();
        q.pop();
        int x,y;
        cin>>x>>y;
        Node *n1 = NULL;
        Node *n2 = NULL;
        if(x!=-1) n1 = new Node(x);
        if(y!=-1) n2 = new Node(y);
        presentRoot->leftChild = n1;
        presentRoot->rightChild = n2;

        if(n1 != NULL) q.push(n1);
        if(n2 != NULL) q.push(n2);
    }


    zigzag_order(root);



    return 0;
}

/*
        3
    9       20
  -1  -1 15     7
        -1 -1 -1 -1
*/
