
#include<bits/stdc++.h>
using namespace std;


class doublyNode{
public:
    int value;
    doublyNode *prev;
    doublyNode *Next;

    // constructor creation
    doublyNode(int val){
        this->value = val;
        prev = NULL;
        Next = NULL;
    }
};


void display(doublyNode *head){
    while(head != NULL){

        if(head->Next != NULL) cout<<head->value<< " -> ";
        else cout<<head->value<<endl;
        head = head->Next;
    }
}


void displayReverse(doublyNode *&head){
    doublyNode *temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    while(temp != NULL){
        if(temp->prev != NULL) cout<<temp->value<< " -> ";
        else cout<<temp->value<<endl;
        temp = temp->prev;
    }
}


void insertAtTail(doublyNode *&head,int val){
    doublyNode *newNode = new doublyNode(val);
    if(head == NULL){
        head = newNode;
        return;
    }else{
        doublyNode *tempNode = head;
        while(tempNode->Next != NULL){
            tempNode = tempNode->Next;
        }
        tempNode->Next = newNode;
        newNode->prev = tempNode;
    }
}


int main(){
    doublyNode *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    cout<<"Normal Print: ";
    display(head);
    cout<<endl;
    cout<<"Reverse Print: ";
    displayReverse(head);
    cout<<endl;
    return 0;
}
