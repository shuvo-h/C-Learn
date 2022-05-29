
/*
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}.
Suppose the address of
a[0] is at 6000. Find the value of the following -
Answer:
a. a[8] = 9
b. &a[5] = 6020
c. a = 6000
d. a+4 = 6016
e. *(a+2) = 3
f. &*(a+4) = 6016


*/
#include<stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("%d\n",a);
    return 0;
}
