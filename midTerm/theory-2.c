
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char s[] = "banana";
    int size = sizeof(s)/sizeof(s[0]);
    printf("%d\n",size);
    return 0;
}
