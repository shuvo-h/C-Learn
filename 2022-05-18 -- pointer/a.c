/*
Write a function that takes no input and prints the number of times the function has been called. Hint: Use static variables.

 	Example: printCall(); printCall(); printCall();  will print
“Called 1 times”
“Called 2 times”
“Called 3 times”

*/

#include<stdio.h>

int count = 0;
void printCall(){
    count++;
     printf("Called %d times\n",count);
}


int main(){
    printCall();
    printCall();
    printCall();
    printCall();
     printCall();
    printCall();
    printCall();
    printCall();
}
