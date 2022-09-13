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



bool isSame(Node *treeOne, Node *treeTwo) {
    if (treeOne == NULL && treeTwo == NULL) {
      return true;
    }

    if (treeOne == NULL || treeTwo == NULL) {
      return false;
    }

    return treeOne->data == treeTwo->data &&
    isSame(treeOne->leftChild, treeTwo->leftChild) &&
    isSame(treeOne->rightChild, treeTwo->rightChild);
}


int main(){
    int a;
    cin>>a;
    Node* root1 = new Node(a);

    queue<Node*> q;
    q.push(root1);
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

    // second tree
    int b;
    cin>>b;
    Node* root2 = new Node(b);

    queue<Node*> qTwo;
    qTwo.push(root2);
    while(!qTwo.empty()){
        Node *presentRootTwo = qTwo.front();
        qTwo.pop();
        int x,y;
        cin>>x>>y;
        Node *n1 = NULL;
        Node *n2 = NULL;
        if(x!=-1) n1 = new Node(x);
        if(y!=-1) n2 = new Node(y);
        presentRootTwo->leftChild = n1;
        presentRootTwo->rightChild = n2;

        if(n1 != NULL) qTwo.push(n1);
        if(n2 != NULL) qTwo.push(n2);
    }

    cout<<"Ckeck if the two tree are identical : ";
    bool isIdentical = isSame(root1,root2);
    if(isIdentical){
        cout<<"Two Tree Are Same"<<endl;
    }else{
        cout<<"Two Tree Are Different"<<endl;
    }

    return 0;
}


/*
Tree Draw:
            1
    2               3
  -1   -1        -1    -1

Tree Input:
1
2 3
-1 -1 -1 -1


Mirror_1
        1
    2       -1
-1    -1

Mirror_2
        1
    -1      2
        -1   -1

Mirror_A
        1
    2       1
-1    -1  -1  -1

MIrror_B
       1
    1       2
-1    -1  -1  -1

*/


