
#include<stdio.h>
//#include<string.h>

int main(){
    char str[100] = "Hello World";
   // int sz = sizeof(str)/sizeof(str[0]);
    //puts(sz);
    //printf("Size is = %d \n",sz);

    int idx = 0;
    int size = 0;
    while(str[idx] != '\0'){
            idx++;
        size++;
        puts(str[idx]);
    }

    printf("Length = %d",idx);
    return 0;
}
