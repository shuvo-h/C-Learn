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
void preOrderTraversal(treeNode *root, string &chk){
    if(root == NULL) {
        return;
    }
    chk += to_string(root->data);
    preOrderTraversal(root->leftChild,chk);
    preOrderTraversal(root->rightChild,chk);

}


// left :> right :> root
void postOrderTraversal(treeNode *root, string &chk){
    if(root == NULL) {
        return;
    }
    postOrderTraversal(root->leftChild,chk);
    postOrderTraversal(root->rightChild,chk);
    chk += to_string(root->data);

}

int levelOrderTraversal(treeNode *root, string &chk, int k){
    if(root == NULL) {
        return -1;
    }
    queue <treeNode*>q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int max = -9999;

    while(!q.empty()){
        treeNode *chkNode = q.front();
        q.pop();
        if(chkNode != NULL){
            // check the max value at the k level
            if(level == k){
                if(max<chkNode->data){
                    max = chkNode->data;
                }
            }
            cout<<chkNode->data<<" ";
            chk += to_string(chkNode->data);
            if(chkNode->leftChild != NULL){
                q.push(chkNode->leftChild);
            }
            if(chkNode->rightChild != NULL){
                q.push(chkNode->rightChild);
            }
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }

    return max;
}

int searchInOrder(int inOrder[], int current, int start, int end){
    for(int i = start; i<=end; i++){
        if(inOrder[i] == current){
            return i;
        }
    }
    return -1;
}

treeNode *buildTreePreIn(int preOrder[], int inOrder[], int start, int end){
    static int id =0;  // id is static variable, so the value will never changed until the program end
    int current = preOrder[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if(start == end){
        return newNode;
    }

    int pos = searchInOrder(inOrder,current,start,end);

    // recursive call for both left and right side of the found position
    newNode->leftChild = buildTreePreIn(preOrder,inOrder,start,pos-1); // for leftChildNode
    newNode->rightChild = buildTreePreIn(preOrder,inOrder,pos+1,end); // for rightChildNode

    return newNode;
}

void printLeaves(treeNode *root){
    if(root == NULL) return;
    if(root->leftChild == NULL && root->rightChild == NULL){
        cout<<root->data<<" ";
        return;
    }
    printLeaves(root->leftChild);
    printLeaves(root->rightChild);
}
void printLeftNonLeaves(treeNode *root){
    if(root == NULL) return;
    if(root->leftChild!=NULL){
        cout<<root->data<<" ";
        printLeftNonLeaves(root->leftChild);
    }else if(root->rightChild!= NULL){
        cout<<root->data<<" ";
        printLeftNonLeaves(root->rightChild);
    }
}
void printRightNonLeaves(treeNode *root){
    if(root == NULL) return;
    if(root->rightChild!=NULL){
        cout<<root->data<<" ";
        printLeftNonLeaves(root->rightChild);
    }else if(root->leftChild!= NULL){
        cout<<root->data<<" ";
        printLeftNonLeaves(root->leftChild);
    }
}

void boundaryTraversal(treeNode *root){
    if(root == NULL) return;
    cout<<root->data<<" ";

    // Left Boundary Non-Leaves
    printLeftNonLeaves(root->leftChild);
    // Left Boundary Leaves
    printLeaves(root->leftChild);
    // Right Boundary Leaves
    printLeaves(root->rightChild);
    // Right Boundary Non-Leaves
    printRightNonLeaves(root->leftChild);
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
/*
    // print the tree
    printTree(allNodes[0], 0);

    string inorderTraversal = "";
    inOrder(allNodes[0], inorderTraversal);
    cout<<"Inorder Traversal : "<<inorderTraversal<<endl;

    string preOrderTraversalStr = "";
    preOrderTraversal(allNodes[0], preOrderTraversalStr);
    cout<<"PreOrder Traversal : "<<preOrderTraversalStr<<endl;

    string postOrderTraversalStr = "";
    postOrderTraversal(allNodes[0], postOrderTraversalStr);
    cout<<"PostOrder Traversal : "<<postOrderTraversalStr<<endl;

    string levelOrderTraversalStr = "";
    int searchvalueInLevel = 2;
    int maxValueAtK = levelOrderTraversal(allNodes[0], levelOrderTraversalStr,searchvalueInLevel);
    cout<<endl<<"Maximum value at "<<searchvalueInLevel<<" level : "<<maxValueAtK<<endl;
*/
    // boundary Traversal
    cout<<"Boundary Traversal : ";
    boundaryTraversal(allNodes[0]);
    cout<<endl;


    // inOrder + preOrder = binary tree
    cout<<"Making Binary Tree from inOrder + preOrder"<<endl;
    int num;
    cin>>num;
    int preOrderArr[num], inOrderArr[num];
    for(int i=0; i<num; i++){
        cin>>preOrderArr[i];
    }
    for(int i=0; i<num; i++){
        cin>>inOrderArr[i];
    }
    int startNodeNumber = 0, endNodeNumber = num-1;
    treeNode *rootBinaryTree = buildTreePreIn(preOrderArr,inOrderArr,startNodeNumber,endNodeNumber);
    string chkPreString = "";
    preOrderTraversal(rootBinaryTree,chkPreString);
    cout<<endl<<"Builded Binary Tree from in and pre order = "<<chkPreString<<endl;
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


 inOrder =  314075826      // left :> root :> right;
 preOrder =  013425786     // root :> Left :> right;  root is at the left side, so scan from left side and match with the inOrder output and place at left side first
 postOrder =  341785620    // left :> right :> root; root is at the right side, so scan from right side and match with the inOrder output and place at right side first

 Another example:
  preOrder =  1 2 4 8 9 10 11 5 3 6 7
  inOrder =  8 4 10 9 11 2 5 1 6 3 7

  preOrder + inOrder = unique binary tree
  postOrder + inOrder = unique binary tree
  preOrder + postOrder = multiple binary tree  (if full binary tree, then a qunique tree can be made)
*/

/*
Input for this file:
9
0   1  2
1   3  4
2   5  6
3  -1 -1
4  -1 -1
5   7  8
6  -1 -1
7  -1 -1
8  -1 -1
9
0 1 3 4 2 5 7 8 6
3 1 4 0 7 5 8 2 6
*/
