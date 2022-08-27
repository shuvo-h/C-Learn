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


int searchInUniqueList(Node *&head,int key){
    Node *temp = head;
    if(temp == NULL){
            return -1;
    }
    int count = 1;
    while(temp->value != key){
        if(temp->Next == NULL){
            return -1;
        }
        temp= temp->Next;
        count++;
    }
    return count;
}



void insertAtSpecificPosition(Node *&head, int pos, int val){
    Node *temp = head;
    int i = 0;
    while(i < pos - 2){
        temp = temp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = temp->Next;
    temp->Next = newNode;
}


void searchAndInsertByValue(Node *&head,int searchValue,int value){
    int position;
    position = searchInUniqueList(head,searchValue);
    insertAtSpecificPosition(head,position+1,value);
}

int countLengthOfLinkedList(Node *&head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->Next;
    }
    return count;
}


void deletionAtHead(Node *&head){
    Node *temp = head;
    if(temp != NULL){
        head = temp->Next;
        delete temp;
    }else{
        cout<<"There is no value in the link list."<<endl;
    }
}

void deletionAtTail(Node *&head){
    Node *temp = head;
    if(temp != NULL && temp->Next != NULL){
        while(temp->Next->Next != NULL){
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = NULL;
        delete delNode;
    }else{
        if(temp == NULL){
            cout<<"There is no value in the link list."<<endl;
        }else{
            deletionAtTail(head);
        }
    }
}


void deletionAtSpecificPosition(Node *&head, int position){
    Node *temp = head;
    if(position <= countLengthOfLinkedList(head)){
        // check if the position is exactly 1
        if(position == 1){
            deletionAtHead(head);
            return;
        }else if(position == countLengthOfLinkedList(head)){
            deletionAtTail(head);
        }else{
            int i = 1;
            while(i<position-1){
                temp = temp->Next;
                i++;
            }
            Node *delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }else{
        cout<<"Position is Out of Bound"<<endl;
    }
}


void deletionByValueUniqueList(Node *&head, int value){
    int position;
    position = searchInUniqueList(head,value);
    if(position == -1){
        cout<<"Value not found in the link list."<<endl;
    }else{
        deletionAtSpecificPosition(head,position);
    }
}


void makeCycle(Node *&head, int pos){
    Node *temp = head;
    Node *startNode;
    int count = 1;
    while(temp->Next != NULL){
        if(count == pos) startNode = temp;
        temp = temp->Next;
        count++;
    }
    temp->Next = startNode;
}


int main(){
    Node *head = NULL;

    // insert the data
    insertAtTail(head,14);
    insertAtTail(head,25);
    insertAtTail(head,33);
    insertAtTail(head,47);
    display(head);

    // (i) insert 40 between 33 and 47
    searchAndInsertByValue(head,33,40);
    display(head);

    // (ii) delete 14 from the list.
    deletionByValueUniqueList(head,14);
    display(head);

    // (iii) create a linear circular linked list
    makeCycle(head,1);
    display(head);
    return 0;
}
