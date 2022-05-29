
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
// not solved YET
    char text[100] , searchChr;
    gets(text);
    scanf("%c",&searchChr);

    char *cur = text;
    bool isFound = false;
    int length = strlen(text);
    for(int i =0; i<length; i++){
        if(searchChr == text[i]){
            printf("%c is found in position = %d\n",text[i],i+1);
            isFound = true;
        }
    }
    if(!isFound) printf("Not Found!");
}
