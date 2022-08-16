
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

struct Test{
    int position[1000];
};


void displayCircularLinkList(Node *head){
    if(head == NULL){
        cout<<"The Linked List is Empty!"<<endl;
        return;
    }

    Node *temp = head;
    do{
        cout<<temp->value;
        temp = temp->Next;
        if(temp!=head) cout<<" -> ";
    }while(temp != head);

    cout<<endl;
}

void insertAtTail(Node *&head,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        newNode->Next = head;
        return;
    }else{
        Node *tempNode = head;  // don't want to loose the head, so use it by keeping in a temp variable
        while(tempNode->Next != head){
            tempNode = tempNode->Next;
        }
        newNode->Next = head;
        tempNode->Next = newNode;
    }
}

void insertAtHead(Node *&head,int val){
    //step 1: newNode create
    Node *newNode = new Node(val);
    //step 2: update of newNode->next
    newNode->Next = head;
    //step 3: update the tail with new head
    if(head == NULL){
        head = newNode;
        newNode->Next = head;
        return;
    }
    Node *temp = head;
    while(temp->Next != head){
        temp = temp->Next;
    }
    temp->Next = newNode;
    //step 4: update of head
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


int countLengthOfCircularLinkedList(Node *&head){
    int count = 0;
    Node *temp = head;
    do{
        count++;
        temp = temp->Next;
    }while(temp != head);
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

Test searchByValueDuplicateReturn(Node *&head, int key){
    Node *temp = head;
    Test Tstruct;
    int k = 1; // start k from 1, so that the 0th index can store the array length
    int count = 1;
    while(temp != NULL){
        if(temp->value == key){
            Tstruct.position[k] = count;
            k++;
        }
        temp= temp->Next;
        count++;
    }
    Tstruct.position[0] = k;  // keep the array length at the first index
    return Tstruct;
}
void searchAndInsertByValue(Node *&head,int searchValue,int value){
    // step 1: search the position of the searchvalue
    int position;
    position = searchInUniqueList(head,searchValue);
    // step 2: Insert the value at position+1
    insertAtSpecificPosition(head,position+1,value);

}

void deletionAtHead(Node *&head){
    // step 1:
    Node *temp = head;
    // step 2:
    if(temp != NULL){
        Node *delNode = temp;
        while(temp->Next != head){
            temp = temp->Next;
        }
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
    }else{
        cout<<"There is no value in the link list."<<endl;
    }
}

void deletionAtTail(Node *&head){
    Node *temp = head;
    if(temp != NULL && temp->Next != NULL){
        while(temp->Next->Next != head){
            temp = temp->Next;
        }
        Node *delNode = temp->Next;
        temp->Next = delNode->Next;
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
        /*
        // position is out of range
        if(position>countLengthOfLinkedList(head)){
            cout<<"Position is Out of Bound"<<endl;
        }else{
            // Link List is Null
            cout<<"There is no value in the link list."<<endl;
        }
        */
    }
}

void deletionByValueUniqueList(Node *&head, int value){
    // find the position of the value
    int position;
    position = searchInUniqueList(head,value);
    // delete the Node at that position
    if(position == -1){
        cout<<"Value not found in the link list."<<endl;
    }else{
        deletionAtSpecificPosition(head,position);
    }
}

Node* reverseNonRecursive(Node *&head){     // O(n) time complexity
    Node *prevNode = NULL;
    Node *currentNode = head;
    // Node *nextNode = head->Next;
    if(head == NULL){
        cout<<"The Link List is Empty!"<<endl;
        return head;
    }
    Node *nextNode = head->Next;

    while(true){
        currentNode->Next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
        if(currentNode == NULL) break;
        nextNode = nextNode->Next;
    }
    return prevNode;
}

Node* reverseRecursive(Node *&head){
    // base call
    if(head == NULL || head->Next == NULL){
        if(head == NULL) cout<<"The Link List is Empty!"<<endl;
        return head;
    }
    // recursive call
    Node* newHead = reverseRecursive(head->Next);
    head->Next->Next = head;
    head->Next = NULL;

    return newHead;
}

int findMid_slowFast(Node *&head){
    // case 1: handle if there is no element in list or null head
    if(head == NULL){
        return -1;
    }
    // case 2: empty head
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->Next != NULL){  // case 3: handle for both odd and even numbers of list
        slow = slow->Next;
        fast = fast->Next->Next;
    }
    return slow->value;
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
    // add the start node adddress to the null pointer and create the cycle
    temp->Next = startNode;
}

bool detect_cycle(Node *&head){
    // case 1: handle if there is no element in list or null head
    if(head == NULL){
        return -1;
    }
    // case 2: empty head
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->Next != NULL){  // case 3: handle for both odd and even numbers of list
        slow = slow->Next;
        fast = fast->Next->Next;
        // cycle check
        if(slow->Next == fast->Next){
            return true;
        }
    }
    return false;
}

void removeCycle(Node *&head){
    // case 1: handle if there is no element in list or null head
    if(head == NULL){
        return;
    }
    // case 2: empty head
    Node *slow = head;
    Node *fast = head;
    // step 1: fast = slow // make atkeast one round else the slow and fast is same at the first stage as 'head'. So using do{}while(), instead of while(){}
    do{
        slow = slow->Next;
        fast = fast->Next->Next;
    }while(slow != fast);

    // step 2: Re-initialization on fast
    fast = head;

    // step 3: loop untill fast->Next == slow->Next
    while(fast->Next != slow->Next){
        slow = slow->Next;
        fast = fast->Next; // make the fast to run with 1 next, not 2 next
    }
    // step 4: break the cycle and set the null at the end point
    slow->Next = NULL;
}

int main(){
    Node *head = NULL;

    cout<<"Choice 0: Display the list:"<<endl
        <<"Choice 1: Insertion at Head: "<<endl
        <<"Choice 2: Insertion at Tail: "<<endl
        <<"Choice 3: Insert a Value at A Specific Position!!! "<<endl
        <<"Choice 4: Deletion at Head"<<endl
        <<"Choice 5: Deletion at Tail"<<endl
        <<"Choice 6: Deletion at specific position"<<endl
        <<endl;
    bool isAgain = true;
    while(isAgain){
            int choice = 5;
            cout<<"Enter the Choice: ";
            cin>>choice;
            int value,position;
            switch(choice){
                case 0:
                    displayCircularLinkList(head);
                    // Length of the Linked List
                    int length;
                    length = countLengthOfCircularLinkedList(head);
                    // int length = countLengthOfLinkedList(head);
                    cout<<"Length of the list: "<<length<<endl;
                    break;
                case 1:
                    cout<<"Enter the value: ";
                    cin>>value;
                    insertAtHead(head,value);
                    break;
                case 2:
                    cout<<"Enter the value: ";
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
                    deletionAtHead(head);
                    break;
                case 5:
                    deletionAtTail(head);
                    break;
                case 6:
                    if(head == NULL){
                        cout<<"There is no value in the link list."<<endl;
                        break;
                    }else{
                        cout<<"Enter the position to delete the element: ";
                        cin>>position;
                        deletionAtSpecificPosition(head,position);
                        break;
                    }
                default:
                    break;
            }
    }


    return 0;
}
