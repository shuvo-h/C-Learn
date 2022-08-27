
#include<bits/stdc++.h>
using namespace std;

template<typename N> class Node{
public:
    N value;
    Node *next;
    Node *prev;
    Node(N val){
        value = val;
        next = NULL;
        prev = NULL;
    }
};

template<typename S> class Stack{
    Node <S>*head;
    Node <S>*top;
    int count = 0;  // sizeCount

public:
    Stack(){
        head = NULL;
        top = NULL;
    }

    // 1) PUSH operation
    void push(S value){
        Node <S>*newNode = new Node<S>(value);
        if(head == NULL){
            head = top = newNode;
            count++;
            return;
        }else{
            top->next = newNode; // add the newNode to top
            newNode->prev = top; // set the previous node of the new last Node
            top = newNode;  // update the top node
            count++;
        }
    }

    // 2) POP operation
    S pop(){
        Node <S>*delNode;
        delNode = top;
        S checkOutValue;
        // case 1: no element in the stack
        if(head == NULL){
            cout<<"Stack Underflow"<<endl;
            return checkOutValue;
        }else if(top == head){ // case 2: there is only one element
            head = top = NULL;
        }else{
            // case 3: set the previous node as top node, and make it's next node to Null as it is the last node
            top = delNode->prev;
            top->next = NULL;
        }
        // delete the element
        checkOutValue = delNode->value;
        delete delNode;
        count--;
        return checkOutValue;
    }

    // 3) Empty check
    bool empty(){
        if(head == NULL) return true;
        else return false;
    }

    // 4) Size check
    int size(){
        return count;
    }

    // 5) Top Node
    S Top(){
        S checkTopValue;
        if(top == NULL){
            cout<<"Stack Underflow | There is no Element in Top"<<endl;
        }else{
            checkTopValue = top->value;
        }
        return checkTopValue;
    }

    // 6) MID Value
    S mid(){
        Node <S>*temp = head;
        S midElement;
        if(temp == NULL) return midElement;
        int midIdx;
        if(count%2 == 0){
            midIdx = (count) / 2;
        }else{
            midIdx = (count+1) / 2;
        }
        for(int i=1; i<=count; i++){
            if(i == midIdx){
                return temp->value;
            }
            temp = temp->next;
        }
        return midElement;
    }

};


