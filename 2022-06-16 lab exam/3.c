
#include<stdio.h>

int count_zero(char str[], int size){
    int counter = 0;
    for(int i = 0; i<size; i++){
            if(str[i] == '0') counter ++;
        printf("%c",str[i]);
    }
    return counter;
}

int main(){
    char string[9] = "100110100";
    int totalZero = count_zero(string,9);
    printf("  total Zero  = %d\n", totalZero);
}
