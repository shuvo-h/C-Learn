


#include<stdio.h>
#include<string.h>

int main(){

    char str[100000];
    gets(str);
    int length = strlen(str);
    //printf("length = %d\n",length);
    int sum = 0;
    //if(length >= 10000 && length <= 99999){
        for(int i=0; i<length; i++){
          // printf("%d = %d \n",i,str[i]-'0');
           sum += str[i]-'0';
        }
        printf("%d",sum);
    //}

    return 0;
}

