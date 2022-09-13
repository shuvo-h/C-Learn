


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

bool checkIfIsSymmetric(Node* rootA,Node* rootB){
    if(rootA == NULL && rootB == NULL){
        return true;
    }

    if(rootA && rootB && rootA->data == rootB->data){
        return checkIfIsSymmetric(rootA->leftChild,rootB->rightChild) && checkIfIsSymmetric(rootA->rightChild,rootB->leftChild);
    }
    return false;
}

 bool isSymmetric(Node* root){
    bool result = checkIfIsSymmetric(root,root);
    return result;
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


    bool resSym = isSymmetric(root);
    if(resSym){
        cout<<"It is Symmetric!"<<endl;
    }else{
        cout<<"It is NOT Symmetric!"<<endl;
    }

    return 0;
}


/*
Tree Draw 1:
            1
    2               2
  3   4          4     3
-1 -1 -1 -1   -1  -1 -1 -1


Tree Draw 2:
                1
        2                2
    -1     3          -1    3
        -1   -1          -1  -1
*/

