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

void display(Node *head){
    while(head != NULL){
        if(head->Next != NULL) cout<<head->value<< " -> ";
        else cout<<head->value<<endl;
        head = head->Next;
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

Node* newLinkList( Node *&head ){
    Node *newList = NULL;
    Node* start = head;
    Node* end;

    while ( start ){
        bool mod = false;
        int sum = 0;
        end = start;
        while ( end ){
            sum += end->value;
            if ( sum == 0 ){
                start = end;
                mod = true;
                break;
            }
            end = end->Next;
        }
        if ( mod == false ) {
            if(newList == NULL) newList = new Node(start->value);
            else  newList->Next = start;
        }

        Node *delNode = start;
        start = start->Next;
        delete delNode;
    }
    return newList;
}


int main(){
    Node *head = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        int value;
        cin>>value;
        insertAtTail(head,value);
    }
    // delete the nodes whose sum is equal to zero
    head = newLinkList(head);
    cout<<endl<<endl;
    display(head);
    return 0;
}

