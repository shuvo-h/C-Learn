#include<stdio.h>
int main(){
    int num = 10;
    int* ptr = &num;
    printf("%p address has the = %p\n",ptr,*ptr);
    printf("%p address has = %d \n",ptr,*ptr);
    return 0;
}



