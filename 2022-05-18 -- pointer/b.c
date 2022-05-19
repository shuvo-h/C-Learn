/*
Suppose you have a global variable number. Write three functions -
set (int v)   	-> updates number to v.
makedouble()	-> doubles number.
print()		-> prints the current value of number.

 	Example:
		set(10);			//v is now 10
		set(5);			//v is now 5
		print();			//prints 5
		makedouble();		//v is now 10
		makedouble();		//v is now 20
		print();
*/
#include<stdio.h>
int number;
int makedouble(){
    int *ptrNumber = &number;
    *ptrNumber = 2**ptrNumber;
}
int set(int n){
    int *ptrNumber = &number;
    *ptrNumber = n;
}

int main(){
    set(60);
    //set(14);
    makedouble();
    printf("value is = %d\n",number);
}
