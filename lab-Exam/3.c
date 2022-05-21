/*
Suppose you have a function gcd(a, b) that finds the gcd of two numbers. Write a program that takes as input 10 integers and finds their gcd. You can assume that the gcd function is implemented.
*/
#include<stdio.h>
int gcd(int a, int b){
    int result_gcd = 1;
    for(int i = 1; i<=a && i<=b; i++){
        if(a%i == 0 && b%i==0){
            result_gcd = i;
        }
    }
    return result_gcd;
}

int main(){
    int nums[10];
    for(int i=0; i<10; i++){
        scanf("%d",&nums[i]);
    }
    int main_gcd = gcd(nums[0],nums[1]);
    for(int i=2; i<10; i++){
        main_gcd = gcd(nums[i],main_gcd);
    }
    printf("%d\n",main_gcd);
}
