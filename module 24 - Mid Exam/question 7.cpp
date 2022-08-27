#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node *Next;

    Node(int val){
        value= val;
        Next = NULL;
    }
};

void insertAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }else{
        Node *temp = head;
        while(temp->Next !=NULL){
            temp = temp->Next;
        }
        temp->Next = newNode;
    }
}

void displayList(Node *&head){
    while(head != NULL){
        if(head->Next != NULL){
            cout<<head->value<<" -> ";
        }else{
            cout<<head->value;
        }
        head = head->Next;
    }
}


Node* reverseKNodes(Node *&head, int k){
    // base case handle
    if(!head) return NULL;
    Node *current = head;
    Node *next = NULL;
    Node *prev = NULL;
    int count = 0;

    while(current!=NULL && count<k){
        next = current->Next;
        current->Next = prev;
        prev = current;
        current = next;
        count++;
    }
    // call recursive function to make all list in this way
    if(next != NULL){
        head->Next = reverseKNodes(next,k);
    }
    return prev;
}

int main(){
    Node *head = NULL;
    int length;
    cin>>length;
    for(int i=0; i<length; i++){
        int value;
        cin>>value;
        insertAtTail(head,value);
    }

    int k;
    cin>>k;
    head = reverseKNodes(head,k);

    displayList(head);
    return 0;
}
