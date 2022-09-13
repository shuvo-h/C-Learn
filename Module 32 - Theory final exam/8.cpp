

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


void spacePrint(int lavel){
    for(int i=0; i<lavel; i++){
        cout<<"    ";
    }
}


void printTree(Node *root, int level){
    if(root == NULL){ // when tree is empty
        return;
    }

    // case 1: leftChild and Right child both are NULL
    if(root->leftChild == NULL && root->rightChild == NULL){
        cout<<root->data<<endl;
        return;
    }else{
        // case 2: if not child NULL, just print the root data with sapce
        cout<<endl;
        spacePrint(level);
        cout<<"Root: "<<root->data<<endl;
    }

    if(root->leftChild!=NULL){
        spacePrint(level);
        cout<<"Left: ";
        printTree(root->leftChild, level+1);
    }

    if(root->rightChild!=NULL){
        spacePrint(level);
        cout<<"Right: ";
        printTree(root->rightChild, level+1);
    }
}


void average_level(Node* root){
    queue<Node*> qNodes;
    qNodes.push(root);

    while (!qNodes.empty()) {
        int sum = 0, level = 0;
        queue<Node*> tempNode;
        while (!qNodes.empty()) {
            Node* currNode = qNodes.front();
            qNodes.pop();
            sum += currNode->data;
            level++;
            if (currNode->leftChild != NULL)
                tempNode.push(currNode->leftChild);
            if (currNode->rightChild != NULL)
                tempNode.push(currNode->rightChild);
        }
        qNodes = tempNode;
        cout << (sum * 1.0 / level) << " ";
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

    average_level(root);

    return 0;
}

/*
                3
        9               20
    -1      -1      15      7
                -1     -1 -1 -1
*/

