#include<stdio.h>
#include<string.h>
/*
int main(){
    char s[50];
    scanf("%s",&s);
    int countA = 0;
    int length = strlen(s);
    for(int i=0; i<length; i++){
        if(s[i] == 'a'){
            countA++;
        }
    }
    if(countA > (length/2) ){
        printf("%d",0);
    }else {
        int need = countA * 2 - 1;
        printf("%d",need);
    }

    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main(){
    char string[51];
    int counter = 0;
    scanf("%s",string);
    int length = strlen(string);
    for(int i=0; i<length; i++){
        if(string[i] == 'a'){
            counter++;
        }
    }
    if(counter <= length/2){
        printf("%d\n", 2*counter-1);
    }else{
        printf("%d\n",length);
    }
    return 0;
}
