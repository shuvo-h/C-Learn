/*
void makeSum(int a, int b, int *sum)
The above function takes as input two integers a and b and stores their sum in the variable sum. Implement the function.

*/

#include<stdio.h>
void makeSum(int a, int b, int *sum){
    *sum = a + b;
}

int main(){
    int result_sum = 0;
    int* ptrResult_sum = &result_sum;
    makeSum(50,99,ptrResult_sum);
    printf("%d",result_sum);
}
