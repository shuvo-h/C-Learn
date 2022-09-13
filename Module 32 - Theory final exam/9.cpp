

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


bool is_unival(Node* root){
    if (root == NULL) {
        return true;
    }

    if (root->leftChild != NULL
        && root->data != root->leftChild->data)
        return false;


    if (root->rightChild != NULL
        && root->data != root->rightChild->data)
        return false;

    return is_unival(root->leftChild) && is_unival(root->rightChild);
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


    bool isUniversal = is_unival(root);
    if(isUniversal){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}

/*
Tree 1:
                1
        1              1
    1       1   -1          1
-1    -1 -1   -1          -1  -1


Tree 2:
                2
        2              2
    5       2   -1          -1
-1    -1 -1   -1

*/


