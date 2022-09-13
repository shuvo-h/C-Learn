

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

void printLevel(Node *root, int level)
{
    if (root == NULL){
        return;
    }
    if (level == 1){
        cout << root->data << " ";
    }
    else if (level > 1){
        printLevel(root->leftChild, level-1);
        printLevel(root->rightChild, level-1);
    }
}

int calculateLevel(Node* root){
    if (root == NULL){
        return 0;
    }else{
        int left_height = calculateLevel(root->leftChild);
        int right_height = calculateLevel(root->rightChild);

        if (left_height > right_height){
            return(left_height + 1);
        }else{
            return(right_height + 1);
        }
    }
}

void level_order_reverse(Node *root){
    int level = calculateLevel(root);

    for (int i=level; i>=1; i--)
        printLevel(root, i);

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


    level_order_reverse(root);

    return 0;
}


/*
Tree Draw:
            3
    9               20
-1   -1          15     7
               -1  -1 -1 -1

*/

