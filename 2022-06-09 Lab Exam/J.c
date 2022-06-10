#include<stdio.h>
#include<string.h>
/*
ABCDE - abcde
aBCDE - Abcde
ABCcde - ABCcde
*/


int main(){
    char value[101];
    scanf("%s",&value);

    int countUpper = 0;
    int countOneEx = 0;
    for(int i=0; i<strlen(value); i++){
        if(value[i] >= 65 && value[i] <= 90) countUpper++;
        if(i == 0) countOneEx++;
        if(value[i] >= 65 && value[i] <= 90 && i != 0) countOneEx++;
    }
    if(countUpper == strlen(value)){
        for(int i=0; i<strlen(value); i++){
            value[i] += 32;
        }
        puts(value);
    }else if(countOneEx == strlen(value)){
        for(int i=0; i<strlen(value); i++){
            if(i == 0) value[i] -= 32;
            if(i != 0) value[i] += 32;
        }
        puts(value);
    }else{
        puts(value);
    }

    return 0;
}
