#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int value;
    Node *Next;

    // constructor creation
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
        Node *tempNode = head;  // don't want to loose the head, so use it by keeping in a temp variable
        while(tempNode->Next != NULL){
            tempNode = tempNode->Next;
        }
        tempNode->Next = newNode;
    }
}

void insertAtHead(Node *&head,int val){
    //step 1: newNode create
    Node *newNode = new Node(val);
    //step 2: update of newNode->next
    newNode->Next = head;
    //step 3: update of head
    head = newNode;
}

int main(){
    Node *head = NULL;

    cout<<"Choice 1: Insertion at Head: "<<endl<<"Choice 2: Insertion at Tail: "<<endl<<"Choice 3: Exit!!! "<<endl;
    int choice = 2;
    while(choice == 1|| choice == 2){
        int n;
        cout<<"Enter the value: "<<endl;
        cin>>n;
        if(choice == 1){
            insertAtHead(head,n);
        }else if(choice == 2){
             insertAtTail(head,n);
        }
        display(head);
        cout<<"Next Choice: ";
        cin>>choice;
    }



    // display the values
    display(head);

    /*
        insertAtTail(head,1);
        insertAtTail(head,6);
        insertAtTail(head,4);
        insertAtTail(head,8);
        insertAtTail(head,5);
        insertAtTail(head,3);
        insertAtTail(head,7);
        insertAtTail(head,27);

        Node *head = new Node();
        Node *second = new Node();
        Node *third = new Node();
        Node *fourth = new Node();

        // value provide
        head->value = 1;
        second->value = 5;
        third->value = 8;
        fourth->value = 9;

        // next node address provide
        head->Next = second;
        second->Next = third;
        third->Next = fourth;
        fourth->Next = NULL;
    */

    return 0;
}
