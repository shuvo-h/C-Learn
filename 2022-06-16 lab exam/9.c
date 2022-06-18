
#include <stdio.h>
#include <string.h>

int check_palindrome(char str[]){
    int counter = 0;
    int length = strlen(str);
    for(int i=0,j=length-1;i<j;i++,j--){
        if(str[i] != str[j]) {
            counter++;
        };
    }
    return counter;
}

int main(){
    char s[100] = "afghhagt";
    int count = check_palindrome(s);
     printf("Change need = %d\n",count);
    return 0;
}
