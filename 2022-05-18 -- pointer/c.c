/*
Write a C function that takes an integer and reverses its digits. The function should have the signature void reverse(int* ).
*/
#include<stdio.h>

void reverse(int *n){

    int value = *n;
    printf("Res value = %d\n",*n);
    int reversNumber = 0;
    while(value > 0){
        int remainder = value%10;
        reversNumber = (reversNumber*10) + remainder;
        value /= 10;
    }
    *n = reversNumber;
    printf("Reverse Number = %d\n",*n);
}


int main(){
    int a = 560789;
    int *ptrA = &a;
    reverse(ptrA);
}
