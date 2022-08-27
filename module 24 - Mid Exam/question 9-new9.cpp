

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
        doublyNode *tempNode = head;
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
    if(head == NULL){
        head = newNode;
        return;
    }
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

doublyNode* addTwoLink(doublyNode *&head,doublyNode *&tempHead){
    //doublyNode *temp = head;

    if(head == NULL) return tempHead;
    if(tempHead == NULL) return head;

    // travers the temp and add the newLink to next
    head->Next = addTwoLink(head->Next,tempHead);
    head->Next->prev = head;
    head->prev = NULL;
    return head;

}


void connectLink(doublyNode *&head,int L,int line,int R){

    if(head == NULL){
        insertAtHead(temp,L);
        insertAtTail(temp,line);
        insertAtTail(temp,R);
    }else{
        while(temp != NULL){
            if(L!=0 && temp->value == L){
                cout<<"Match L = "<<L<<" & Temp value = "<<temp->value<<endl;
                doublyNode *tempTrNode = temp->Next;
                newNodeLine->prev = temp;
                temp->Next = newNodeLine;
                newNodeR->prev = newNodeLine;
                newNodeLine->Next = newNodeR;
                newNodeR->Next = tempTrNode;
                break;
            }

            temp = temp->Next;
        }
        cout<<"this com out"<<endl;
        head = temp;
        display(head);

    }

}


/*
 7
4 7         4-1-7
5 0         5-2
0 0         3
6 1         6-4-1-7     (connect 1)
0 2         5-2
0 4         6-4-1-7
1 0         1-7

*/

int main(){
    doublyNode *head = NULL;
    int round;
    cin>>round;

    for(int line=1;line<=round;line++){
        int L,R;
        cin>>L>>R;
        // make a temporary line first
        connectLink(head,L,line,R);
        //printLastPrevNext(head);
        cout<<endl;
        //display(head);
    }

    cout<<"Final Head"<<endl;
    //display(head);

    return 0;
}


/*
int main(){
    doublyNode *head = NULL;
    int round;
    cin>>round;

    for(int line=1;line<=round;line++){
        int L,R;
        cin>>L>>R;
        // make a temporary line first
        doublyNode *tempHead = NULL;
        insertAtHead(tempHead,L);
        insertAtTail(tempHead,line);
        insertAtTail(tempHead,R);
        // add the temp linkList to the main head
        head = addTwoLink(head,tempHead);

        //printLastPrevNext(head);
        cout<<endl;
        //display(tempHead);
    }

    cout<<"Final Head"<<endl;
    display(head);

    return 0;
}

*/

/*

6
0 2
1 3
2 4
3 5
4 6
5 0

*/
