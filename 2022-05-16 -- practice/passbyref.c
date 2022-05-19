#include<stdio.h>
void makePositive(int* num){
    if(*num < 0){
        *num = -*num;
    }
}
int main(){
    int a = -10;
    printf("%d\n",a);
    makePositive(&a);
    printf("%d\n",a);
}
