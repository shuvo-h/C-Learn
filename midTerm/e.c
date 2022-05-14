
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    char inputStr[n];
    scanf("%s",inputStr);
    char allChar[27] = "abcdefghijklmnopqrstuvwxyz";
    int resultBol[n];

    bool roundMatcher = true;
    for(int i=0; i<strlen(allChar); i++){
        bool roundMatcher = false;
       for(int j=0; j<strlen(inputStr);j++){
            char runChar = inputStr[j];
            if(inputStr[j] < 97){
                runChar = inputStr[j] + 32;
            }
            if(allChar[i] == runChar){
                //printf("%c = %c\n",inputStr[j],runChar);
                roundMatcher = true;
            }
       }
       if(roundMatcher == false){
        roundMatcher = false;
         printf("%s","NO");
         break;
       }else if(i == strlen(allChar)-1){
           printf("%s","YES");
       }
    }

    return 0;
}
