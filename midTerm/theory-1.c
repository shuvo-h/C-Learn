

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int n = 10;
int a[n], b[n];
for (int i=0; i<n; i++) {
//Write Code Here
int temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
}
