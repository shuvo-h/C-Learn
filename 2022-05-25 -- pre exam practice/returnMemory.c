/*
Write a makeReverse function that takes an array and returns its reverse by pointer. To make sure you don’t accidentally reverse the array itself, we use the const modifier in the signature. The signature should be
	int * makeReverse(int n, const int a[]);
*/

#include<stdio.h>
#include<stdlib.h>

int *makeReverse(int n, const int a[]){
    int *result = (int *) malloc(n*sizeof(int));
    for(int j=n-1,i=0; j>=0, i<n; i++,j--){
        result[i] = a[j];
    }
    return result;
}

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int *revar = makeReverse(n,ar);
    for(int i=0; i<n; i++ ){
        printf("%d ",revar[i]);
    }
}
