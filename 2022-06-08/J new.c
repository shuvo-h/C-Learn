#include<stdio.h>
#include<string.h>


int main(){
    char str[101];
    scanf("%s",&str);
    int counter = 0;
    for(int i=1; i<strlen(str); i++){
         if(str[i] <= 'Z' && str[i] >= 'A') counter++;
    }
    if(str[0] <= 'z' && str[0] >= 'a') counter++;
    if(counter == strlen(str)){
        str[0] -= 32;
        for(int i=1; i<strlen(str); i++){
            str[i] += 32;
        }
         puts(str);
    }else{
         puts(str);
    }
    return 0;
}


