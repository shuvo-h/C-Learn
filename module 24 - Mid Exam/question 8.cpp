
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

void deleteWithTwoPoints(Node *&head, int M, int N){
    Node *temp = head;
    int i;
    while(temp != NULL){
        // skips fist M elements
        for(i = 1; i<M && temp !=NULL; i++){
            temp = temp->Next;
        }
        // return if the list is end
        if(temp == NULL){
            return;
        }
        // Delete N nodes
        Node *traverseNode;
        traverseNode = temp->Next;
        for(i=1; i<=N && traverseNode!= NULL; i++){
            Node *delNode = traverseNode;
            traverseNode = traverseNode->Next;
            free(delNode);
        }
        temp->Next = traverseNode;
        temp = traverseNode;
    }
}

int main(){
    Node *head = NULL;
    int length;
    cin>>length;
    int M,N;
    cin>>M>>N;
    for(int i=0; i<length; i++){
        int value;
        cin>>value;
        insertAtTail(head,value);
    }

    deleteWithTwoPoints(head,M,N);

    cout<<endl;
    displayList(head);
    return 0;
}
