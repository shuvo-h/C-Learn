

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


int tiltTraverse(Node *root, int *tilt_sum){
    if(root == NULL){
        return 0;
    }
    int leftSide = tiltTraverse(root->leftChild,tilt_sum);
    int rightSide = tiltTraverse(root->rightChild,tilt_sum);

    *tilt_sum += abs(leftSide-rightSide);
    return leftSide+rightSide+root->data;
}

int findTilt(Node* root){
    if(root == NULL){
        return 0;
    }

    int tilt_sum = 0;
    tiltTraverse(root,&tilt_sum);
    return tilt_sum;
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

    int totalSum = findTilt(root);
    cout<<"Total Sum : "<<totalSum<<endl;

    return 0;
}

/*
Tree 1:

        1
    2       3
 -1   -1 -1  -1


 Tree 2:
                4
        2              9
    3       5       -1      7
-1    -1 -1   -1          -1  -1
*/
