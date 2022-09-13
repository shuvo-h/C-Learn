
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

Node* invert_tree(Node* root){

	if (root == NULL){
		return root;
	}else{
		 Node* temp;
		invert_tree(root->leftChild);
		invert_tree(root->rightChild);

		temp	 = root->leftChild;
		root->leftChild = root->rightChild;
		root->rightChild = temp;
	}
	root;
}


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

    Node* newRoot = invert_tree(root);
    cout<<endl;
    printTree(newRoot);

    return 0;
}

/*
Tree:
            4
    2           7
  1    3      6    9
-1 -1 -1 -1 -1 -1 -1 -1
*/

