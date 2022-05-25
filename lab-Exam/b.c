/*

To dynamically allocate an array of n elements and int type, we use the following syntax.

int *a = (int*) malloc(n*sizeof(int));

	How to declare an array of double type and 5 elements. How much space does it take?
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    double *arrName = (double*)malloc(5*sizeof(double));
    for(int i=0; i<n; i++){
        scanf("%lf",&arrName[i]);
    }

    for(int i=0; i<n; i++){
        printf("%lf\n",arrName[i]);
    }
}
