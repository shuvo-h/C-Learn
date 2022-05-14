#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char guess[100];
    for(int i = 0; i<n; i++){
        char strInput[100];
        scanf("%s",&strInput);
        for(int j = 0; j < strlen(strInput); j++){
            if(j == 0 || j == (strlen(strInput)-1)){
                 printf("%c",strInput[j]);
            }else if(j%2 != 0){
                printf("%c",strInput[j]);
            }
        }
        printf("\n");
    }
    return 0;
}

/*

#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char guess[100];
    int counter = 0;
    for(int i = 0; i<n; i++){
        char strInput[100];
        scanf("%s",&strInput);
        for(int j = 0; j < strlen(strInput); j++){
            if(j == 0){
                guess[counter] = strInput[j];
                counter++;
            }else if(guess[counter-1] != strInput[j]){
                guess[counter] = strInput[j];
                counter++;
            }
        }

        guess[counter] = '\0';
        counter++;
    }
    for(int i = 0; i < counter; i++){
           // printf("%c = \n",guess[i]);
            if(guess[i] == '\0'){
                printf("\n");
            }else{
                printf("%c",guess[i]);
            }

    }
    return 0;
}
*/
