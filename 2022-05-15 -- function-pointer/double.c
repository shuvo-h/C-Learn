#include<stdio.h>
void makeDouble(int* a){ // receiving address
    // making double of the value
    //which is in the received parameter
    int tempDouble = 2**a;
     *a = tempDouble;   //and assigning that double value of that address
}
int main(){
    int x= 10;
    makeDouble(&x);
    printf("x = %d\n",x); // changed the value from address memory
}
