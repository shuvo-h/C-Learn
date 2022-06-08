


#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// Palindrome = reverse of a string is same as original string, eg. madam == strrev(madam)

int main(){
    char a[100];
    fgets(a,100,stdin);
    a[strlen(a)-1] = '\0';
    bool word=false;
    int wordCount = 0;
    for(int i=0; i<strlen(a); i++){
        char value = a[i];
        if(value != ' '){
            word = true;
        }
        if(value == ' '){
            if(word){
                wordCount++;
                word = false;
            }
        }
    }
    if(word){
        wordCount++;
        word = false;
    }
    printf("Number of words = %d \n",wordCount);

    return 0;
}
