
#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int value;
    Node *Next;
    Node(int val){
        value = val;
        Next = NULL;
    }
};

void display(Node *n){
    while(n != NULL){
        if(n->Next != NULL) cout<<n->value<< " -> ";
        else cout<<n->value<<endl;
        n = n->Next;
    }
}

void insertAtTail(Node *&head,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }else{
        Node *tempNode = head;
        while(tempNode->Next != NULL){
            tempNode = tempNode->Next;
        }
        tempNode->Next = newNode;
    }
}

void insertAtHead(Node *&head,int val){
    Node *newNode = new Node(val);
    newNode->Next = head;
    head = newNode;
}

void reversedListPrint(Node *n){
    if(n == NULL){
        return;
    }
    reversedListPrint(n->Next);
    cout<<n->value<<" ";
}

int main(){
    Node *head = NULL;

    insertAtTail(head,5);
    insertAtTail(head,7);
    insertAtHead(head,1);
    insertAtHead(head,14);

    // display the values
    display(head);
    cout<<endl;
    reversedListPrint(head);
    cout<<endl<<endl;
    display(head);



    struct Node* ptr = head;
    int sum = 0;
   while (ptr->value != 14) {
      sum += ptr->value;
      ptr = ptr->Next;
   }
   //sum -= ptr->value;
   cout << "Sum of nodes = "<< sum;


    return 0;
}
