
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

int countLengthOfLinkedList(Node *&head){
    int count = 0;
    Node *temp = head;
    while(temp != NULL){
        count++;
        temp = temp->Next;
    }
    return count;
}
void insertAtSpecificPosition(Node *&head, int pos, int val){
    // step 1: keep the head in a temp Node
        Node *temp = head;
        int i = 0;
    // while(i<position - 2) would add the new node in that position
    // step 2: traverse up to position
    while(i < pos - 2){
        temp = temp->Next;
        i++;
    }
    // step 1: create a new Node
        Node *newNode = new Node(val);
    // step 3: keep the Next of temp Node into next of new Node  newNode->next = temp->next
        newNode->Next = temp->Next;
    // step 4: keep the newNode in the next of temp
        temp->Next = newNode;
}

int searchInUniqueList(Node *&head,int key){
    // step 1: keep the head in a temp variable and declare a counter for the position
    Node *temp = head;
    if(temp == NULL){
            return -1;
    }
    int count = 1; // start counting from 1, or add 1 during returning, so that the right element's position will be returned
    // step 2: traverse continuously until you find the key
    while(temp->value != key){
        // step 3: check if the temp is null, then return response that search element didn't find
        if(temp->Next == NULL){
            return -1;
        }
        temp= temp->Next;
        count++;
    }
    // step 4: return the counter position when found the search item
    return count;
}
void searchInDuplicateList(Node *&head,int key){
    Node *temp = head;
    int size = countLengthOfLinkedList(head);
    int foundPositions[size+1], k = 1; // 1 extra length to store the array size in the 0 index of that array
    int count = 1;
    bool isFound = false;
    while(temp != NULL){
        if(temp->value == key){
            foundPositions[k] = count; // keep the index number of linkedList for the duplicate search value
            k++;
            isFound = true;
        }
        temp= temp->Next;
        count++;
    }
    if(!isFound){
        cout<<"The search value is not in the list!"<<endl;
    }else{
        foundPositions[0] = k; // keep the length of the duplicate value array size in first position(0 index);
        cout<<"The value is found at position: ";
        for(int i = 1; i<foundPositions[0]; i++){
            cout<<foundPositions[i];
            if(i<foundPositions[0]-1) cout<<",";
        }
        cout<<endl;
    }
}
int main(){
    Node *head = NULL;

    cout<<"Choice 1: Insertion at Head: "<<endl
        <<"Choice 2: Insertion at Tail: "<<endl
        <<"Choice 3: Insert a Value at A Specific Position!!! "<<endl
        <<"Choice 4: Search a Value(unique list)!"<<endl
        <<"Choice 5: Search a Value(duplicate list)!"<<endl;
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
                    cout<<"Enter the position, you want to insert: "<<endl;
                    cin>>position;
                    cout<<"Enter the value to be added at that position: "<<endl;
                    cin>>value;
                    insertAtSpecificPosition(head,position,value);
                    break;
                case 4:
                    cout<<"Enter the value you want to search: "<<endl;
                    cin>>value;
                    position = searchInUniqueList(head,value);
                    if(position > -1){
                        cout<<"The number is at position: "<<position<<endl;
                    }else{
                        cout<<"Didn't find the searched element!"<<endl;
                    }
                    break;
                case 5:
                    cout<<"Enter the value you want to search: "<<endl;
                    cin>>value;
                    searchInDuplicateList(head,value);
                    if(position > -1){
                        cout<<"The number is at position: "<<position<<endl;
                    }else{
                        cout<<"Didn't find the searched element!"<<endl;
                    }
                    break;
                default:
                    break;
            }
        display(head);
        //cout<<"Next Choice: ";
        //cin>>choice;
    }



    // display the values
    // display(head

    // Length of the Linked List
    int length = countLengthOfLinkedList(head);
    cout<<"Length of the list: "<<length<<endl;

    return 0;
}
