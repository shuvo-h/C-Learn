
#include<bits/stdc++.h>
using namespace std;

void inserInArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<"Type the value of: "<<i<<" index: ";
        cin>>arr[i];
    }
}
// traversal
void printArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// insert an element in a position in sorted array array
void insertNewElement_sortedArray(int array[], int size, int pos, int newElement){
    if(pos<0 || pos>size){
        cout<<"Invalid Index. Please give the right position!"<<endl;
    }else{
        for(int i=size-1; i>=pos;i--){
            array[i+1] = array[i]; // move each element 1 idx right up to pos
        }
        array[pos] = newElement;
    }
}
// insert an element in a position in unsorted array array
void insertNewElement_unsortedArray(int array[], int size, int pos, int newElement){
    if(pos<0 || pos>size){
        cout<<"Invalid Index. Please give the right position!"<<endl;
    }else{
        // keep the pos value at length index, and the insert new element to position
        array[size] = array[pos]; // just move the desired positioned value to last length index, and insert the new element at that position
        array[pos] = newElement;
    }
}

// Delete an element in a position in sorted array array
void deleteAnElement_sortedArray(int array[], int *size, int pos, int newElement){
    //cout<<"Size Received  = "<<*size<<endl;
    if(pos<0 || pos>*size-1){
        cout<<"Invalid Index. Please give the right position!"<<endl;
    }else{
        // check if the deleteed element is the last element of the array
        if(pos == *size - 1){
             *size = *size - 1; // accept and return the pointer of size in this case
        }else{
            for(int i=pos+1; i<*size;i++){
                array[i-1] = array[i]; // move each element 1 idx right up to pos
            }
            *size = *size - 1;
        }
    }
    //cout<<"Size Returning  = "<<*size<<endl;
}


int main(){

    /*
    int array[50],size;
    cout<<"Type the size of array: ";
    cin>>size;
    inserInArray(array,size);
    printArray(array,size);
    // inset a new element
    int pos, value;
    cout<<"Position of the insertion: ";
    cin>>pos;
    cout<<endl;
    cout<<"Value of the position: ";
    cin>>value;
    //insertNewElement_sortedArray(array,size,pos,value);
    //printArray(array,size+1); // increase the size
    //insertNewElement_unsortedArray(array,size,pos,value);
    //printArray(array,size+1); // increase the size
    deleteAnElement_sortedArray(array,&size,pos,value);
    cout<<"Size afeter delete = "<<size<<endl;
    cout<<endl;
    cout<<"New array Elements after Insertion: ";
    printArray(array,size);
    cout<<endl;
    */

    int a[3];
for(int i=0;i<4;i++)
{
    a[i]=i;
}
for(int i=0;i<4;i++)
{
    cout<<a[i]<<" ";
}

    return 0;
}
