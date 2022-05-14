#include<stdio.h>
#include<string.h>
int main(){
    char words[1000-1];
    scanf("%s",&words);
    for(int i=0; i<strlen(words); i++){
        if(i == 0){
            if(words[i] >= 'a'){
                words[i] = words[i] - 32;
            }
        }
    }
    puts(words);
}
