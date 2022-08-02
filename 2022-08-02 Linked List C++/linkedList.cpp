#include<bits/stdc++.h>
using namespace std;


class Node{
public:
    int value;
    Node *Next;
};

void display(Node *n){
    while(n != NULL){

        if(n->Next != NULL) cout<<n->value<< " -> ";
        else cout<<n->value<<endl;
        n = n->Next;
    }
}
int main(){
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

    // display the values
    display(head);
    return 0;
}
