
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

void level_order(Node *root){
    if(root == NULL) {
        return;
    }
    queue <Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *chkNode = q.front();
        q.pop();
        if(chkNode != NULL){
            cout<<chkNode->data<<" ";
            if(chkNode->leftChild != NULL){
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild != NULL){
                q.push(chkNode->rightChild);
            }
        }else if(!q.empty()){
            q.push(NULL);
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

    cout<<"Level Order Traversal : ";
    level_order(root);

    return 0;
}


/*
Tree Draw:
            3
    9              20
  -1   -1       15     7
             -1   -1 -1  -1
*/

