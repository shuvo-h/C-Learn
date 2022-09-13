

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


int findMin(Node* node, int minValue) {
        if (node == NULL) {
            return INT_MAX;
        }
        if (node->data > minValue) {
            return node->data;
        }
        int leftValue = findMin(node->leftChild, minValue);
        int rightValue = findMin(node->rightChild, minValue);
        return min(leftValue, rightValue );
}

int second_minimum(Node* root){
     if(root == NULL){
        return -1;
     }
    int val = findMin(root, root->data);

    if (val == INT_MAX) {
            return -1;
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


    int secondMin = second_minimum(root);
    cout<<"Second Minimum is : "<<secondMin<<endl;

    return 0;
}

/*
Tree 1:
                2
        2               5
    -1      -1      5       7
                -1     -1 -1  -1

Tree 2:
                2
        2               2
    -1    -1         -1    -1
*/



