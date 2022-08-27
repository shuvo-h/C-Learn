
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
        Node *tempNode = head;  // don't want to loose the head, so use it by keeping in a temp variable
        while(tempNode->Next != NULL){
            tempNode = tempNode->Next;
        }
        tempNode->Next = newNode;
    }
}


void deletBasedOnSUmZero(Node *&head){
    Node *start = head;
    Node *cur;

  while (start){
    bool mode = false;
    int total = 0;
    cur = start;
    while (cur != NULL){
      total += cur->value;
      //cout<<"Total = "<<total<<" : "<<"Value = "<<cur->value<<endl;
      if (total == 0){
        start = cur;
        mode = true;
        head = cur->Next;;
        break;
      }else{
        cur = cur->Next;
      };
    }
    if(mode == false){
      cout<<"_____"<<start->value<<endl;
    }else{
        //delete the nodes
        //cout <<"dele nodes = "<<start->value<<" ";
    }
      start = start->Next;
  }

}

void printExCancel( Node *&head ){
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
            //push to new list
            printf( "%d\n", start->value );
        }
        //else {
        //    call funtion to delete from start to end
        //}
        start = start->Next;
    }
}


Node* newLinkList( Node *&head ){
    Node *newList = NULL;
    Node* start = head;
    Node* end;
    bool isFiest = true;
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

            //push to new list
            printf( "%d\n", start->value );
        }
        //else {
        //    call funtion to delete from start to end
        //}

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
    // deletBasedOnSUmZero(head);
    //printExCancel(head);
    head = newLinkList(head);
    cout<<endl<<endl;
    display(head);
    return 0;
}

