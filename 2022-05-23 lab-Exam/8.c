
/*
stringCat(char a[], char b[], char out[]) The strcat function takes two strings and contacts them and outputs them to a out. Assume that out has enough space to hold contents of both a and b. Implement the function.
*/
#include<stdio.h>
#include<string.h>
void stringCat(char a[], char b[], char out[]){
    int aLeng = strlen(a);
    int bLeng = strlen(b);
    for(int i = 0; i<aLeng; i++){
        out[i] = a[i];
    }
    for(int i = aLeng, j=0; i<(aLeng+bLeng); i++, j++){
                out[i] = b[j];
    }
}

int main(){
    char first[20]={'a','b','c','d','e','f'};
    char second[20] ={'g','h','i','j','k'};
    char total[100];
    stringCat(first,second,total);
    int totalLen = strlen(total);
    printf("%d\n",totalLen);
     for(int i = 0; i<totalLen; i++){
        printf("%c",total[i]);
    }
}
