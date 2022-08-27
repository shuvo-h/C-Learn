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
void replaceEven(Node *&head){
    Node *temp = head;
    while(temp != NULL){
        int isEven = temp->value%2;
        if(isEven == 0) temp->value = -1;
        temp = temp->Next;
    }

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
    replaceEven(head);
    displayList(head);
    return 0;
}
