#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    char useName[101];
    gets(useName);
    char filterChar[101];
    int counter = 0;
    int repeated = 0;
    for(int i = 0; i<strlen(useName); i++){
        bool gitRepeater = false;
        for(int j = 0; j<counter; j++){
            if(useName[i] == filterChar[j]){
                gitRepeater = true;
                repeated++;
            }
        }
        if(!gitRepeater){
            filterChar[counter] = useName[i];
            counter++;
        }
    }
    //printf("%d\n",repeated);

    int pureCount = strlen(useName) - repeated;
    if(counter%2 == 0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
    return 0;
}
