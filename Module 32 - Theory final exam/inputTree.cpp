

#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *leftChild;
    Node *rightChild;
    Node(int value){
        this->data =value;
        this->leftChild = NULL;
        this->rightChild = NULL;
    }
};

void printTree(Node *root){
    if(root == NULL){
        return;
    }
    printTree(root->leftChild);
    cout<<root->data<<" ";
    printTree(root->rightChild);
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


    printTree(root);

    return 0;
}


/*
Tree diagram
		1
	2		 3
  4   -1  5     6
-1 8   -1  -1 -1 7
 -1-1          -1-1


tree input
1
2 3
4 -1 5 6
-1 8 -1 -1 -1 7
-1 -1 -1 -1


*/



