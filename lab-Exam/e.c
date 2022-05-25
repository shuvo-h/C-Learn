/*
Try to find the maximum length of a dynamically allocated array in your setup.
	int n = 1000000000;
	int *a = (int*) malloc(n*sizeof(int));

In the above code, change the value of n, and see what values the allocation fails. Remember, if the allocation fails, you will get a null pointer.

*/

// need to solve from support
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 2000000000000;
    //int n = 100;
	//int *a = (int*) malloc(n*sizeof(int));
	double *a = (double*) malloc(n*sizeof(double));
	printf("%p\n",a);
}
