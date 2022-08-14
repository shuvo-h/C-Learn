
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
        head = temp->Next;
        // step 3:
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
        <<"Choice 4: Search a Value(unique list)!"<<endl
        <<"Choice 5: Search a Value(duplicate list)!"<<endl
        <<"Choice 6: Insertion after a specific value(Unique list)!"<<endl
        <<"Choice 7: Deletion at Head"<<endl
        <<"Choice 8: Deletion at Tail"<<endl
        <<"Choice 9: Deletion at specific position"<<endl
        <<"Choice 10: Deletion by Value (Unique List)"<<endl
        <<"Choice 11: Reversal of List Non-Recursive"<<endl
        <<"Choice 12: Reversal of List Recursive"<<endl
        <<"Choice 13: Finding the Mid(Slow-Fast Pointer Method)"<<endl
        <<"Choice 14: Create Cycle at 'K' position"<<endl
        <<"Choice 15: Detect if there is a cycle in the link list"<<endl
        <<"Choice 16: Remove the cycle from a link list"<<endl
        <<endl;
    bool isAgain = true;
    while(isAgain){
            int choice = 5;
            cout<<"Enter the Choice: ";
            cin>>choice;
            int value,position;
            switch(choice){
                case 0:
                    display(head);
                    // Length of the Linked List
                    int length;
                    length = countLengthOfLinkedList(head);
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
                    /*
                    searchInDuplicateList(head,value);
                    if(position > -1){
                        cout<<"The number is at position: "<<position<<endl;
                    }else{
                        cout<<"Didn't find the searched element!"<<endl;
                    }
                    */
                    Test posList;
                    posList = searchByValueDuplicateReturn(head,value);
                    if(posList.position[0] == 1){
                        cout<<"Search value is not in the list!"<<endl;
                    }else{
                        cout<<"The value is founded at positions: ";
                        for(int i=1; i<posList.position[0]; i++){
                            cout<<posList.position[i];
                            if(i<posList.position[0] - 1) cout<<", ";
                        }
                        cout<<endl;
                    }
                    break;
                case 6:
                    cout<<"Enter the value to search: ";
                    int searchValue;
                    cin>>searchValue;
                    cout<<"Enter the value to insert: ";
                    cin>>value;
                    searchAndInsertByValue(head,searchValue,value);
                    break;
                case 7:
                    deletionAtHead(head);
                    break;
                case 8:
                    deletionAtTail(head);
                    break;
                case 9:
                    if(head == NULL){
                        cout<<"There is no value in the link list."<<endl;
                        break;
                    }else{
                        cout<<"Enter the position to delete the element: ";
                        cin>>position;
                        deletionAtSpecificPosition(head,position);
                        break;
                    }
                case 10:
                    cout<<"Enter the value to delete: ";
                    cin>>value;
                    deletionByValueUniqueList(head,value);
                    break;
                case 11:
                    head = reverseNonRecursive(head);
                    break;
                case 12:
                    head = reverseRecursive(head);
                    break;
                case 13:
                    int midValue;
                    midValue = findMid_slowFast(head);
                    if(midValue < 0)
                        cout<<"The Link list is empty!"<<endl;
                    else
                        cout<<"Mid value is = "<< midValue<<endl;
                    break;
                case 14:
                    cout<<"Enter the position you want to create cycle: "<<endl;
                    cin>>position;
                    makeCycle(head,position);
                    break;
                case 15:
                    bool isCycle;
                    isCycle = detect_cycle(head);
                    if(isCycle){
                        cout<<"There is a cycle in the list!"<<endl;
                    }else{
                         cout<<"No cycle found in the list!"<<endl;
                    }
                    break;
                 case 16:
                    bool isCycleCheck;
                    isCycleCheck = detect_cycle(head);
                    if(isCycleCheck){
                        cout<<"There is a cycle in the list!"<<endl;
                        removeCycle(head);
                    }else{
                         cout<<"No cycle found in the list!"<<endl;
                    }
                    break;
                default:
                    break;
            }

        //cout<<"Next Choice: ";
        //cin>>choice;
    }



    // display the values
    // display(head



    return 0;
}
