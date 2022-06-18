#include<stdio.h>
#include<stdbool.h>

int main(){
    int number = 6;
    int *P = &number;
    int **Q = &P;
    int ***R = &Q;
    printf("original variable = %d\n", number);
    ***R = 8;
    printf("Changing through R = %d\n", number);
}



