
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


void display(doublyNode *n){
    while(n != NULL){

        if(n->Next != NULL) cout<<n->value<< " -> ";
        else cout<<n->value<<endl;
        n = n->Next;
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
        doublyNode *tempNode = head;  // don't want to loose the head, so use it by keeping in a temp variable
        while(tempNode->Next != NULL){
            tempNode = tempNode->Next;
        }
        tempNode->Next = newNode;
        newNode->prev = tempNode;
    }
}



void insertAtHead(doublyNode *&head,int val){
    //step 1: newNode create
    doublyNode *newNode = new doublyNode(val);
    //step 2: update of head->prev
    head->prev = newNode;
    //step 3: update of newNode->next
    newNode->Next = head;
    //step 4: update of head
    head = newNode;
}


int countLengthOfLinkedList(doublyNode *&head){
    int count = 0;
    doublyNode *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->Next;
    }
    return count;
}



int main(){
    doublyNode *head = NULL;

    cout<<"Choice 1: Insertion at Head: "<<endl
        <<"Choice 2: Insertion at Tail: "<<endl
        <<"Choice 3: Print the list in reverse way"<<endl
        <<endl;
    int choice = 5;
    while(choice != 0){
            cout<<"Enter the Choice: "<<endl;
            cin>>choice;
            int value,position;
            switch(choice){
                case 1:
                    cout<<"Enter the value: "<<endl;
                    cin>>value;
                    insertAtHead(head,value);
                    break;
                case 2:
                    cout<<"Enter the value: "<<endl;
                    cin>>value;
                    insertAtTail(head,value);
                    break;
                case 3:
                    displayReverse(head);
                    break;

                default:
                    break;
            }
        // print the doubly link list
        display(head);
    }

    // Length of the Linked List
    int length = countLengthOfLinkedList(head);
    cout<<"Length of the list: "<<length<<endl;

    return 0;
}

