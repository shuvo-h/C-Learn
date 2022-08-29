#include<bits/stdc++.h>
using namespace std;

class treeNode{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value){
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


void printTree(treeNode *root, int level){
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

// left :> root :> right
void inOrder(treeNode *root, string &chk){
    if(root == NULL) {
        return;
    }
    inOrder(root->leftChild,chk);
    chk += to_string(root->data);
    inOrder(root->rightChild,chk);

}


// root :> left :> right
void preOrder(treeNode *root, string &chk){
    if(root == NULL) {
        return;
    }
    chk += to_string(root->data);
    preOrder(root->leftChild,chk);
    preOrder(root->rightChild,chk);

}


// left :> right :> root
void postOrder(treeNode *root, string &chk){
    if(root == NULL) {
        return;
    }
    postOrder(root->leftChild,chk);
    postOrder(root->rightChild,chk);
    chk += to_string(root->data);

}


int main(){
    // input on number of node in the tree
    int n;
    cin>>n;

    // declare the array of number of nodes in a tree
    treeNode *allNodes[n];
    // initially set -1 to all tree nodes
    for(int i=0; i<n; i++){
        allNodes[i] = new treeNode(-1);
    }

    for(int i=0; i<n; i++){
        int value, left,right;
        cin>>value>>left>>right;
        allNodes[i]->data = value;
        if(left>n-1 || right>n-1){
            cout<<"Invalid Index"<<endl;
            break;
        }
        if(left!=-1){
            allNodes[i]->leftChild = allNodes[left];
        }
        if(right!=-1){
            allNodes[i]->rightChild = allNodes[right];
        }
    }

    // print the tree
    printTree(allNodes[0], 0);

    string inorderTraversal = "";
    inOrder(allNodes[0], inorderTraversal);
    cout<<"Inorder Traversal : "<<inorderTraversal<<endl;

    string preOrderTraversal = "";
    preOrder(allNodes[0], preOrderTraversal);
    cout<<"PreOrder Traversal : "<<preOrderTraversal<<endl;

    string postOrderTraversal = "";
    postOrder(allNodes[0], postOrderTraversal);
    cout<<"PostOrder Traversal : "<<postOrderTraversal<<endl;

    return 0;
}


/*
Tree Draw:
            0
    1               2
  3   4          5     6
               7   8

Tree lavel:
9
R  Rt  L
0   1  2
1   3  4
2   5  6
3  -1 -1
4  -1 -1
5   7  8
6  -1 -1
7  -1 -1
8  -1 -1

Root: 0
Left:
    Root: 1
    Left:
        Root: 3
        Left: -1
        Right: -1
    Right:
            Root: 4
            Left: -1
            Right: -1
Right:
    Root: 2
    Left:
        Root: 5
        Left:
            Root: 7
            Left: -1
            Right: -1
        Right:
            Root: 8
            Left: -1
            Right: -1
    Right:
        Root: 6
        Left: -1
        Right: -1


*/
