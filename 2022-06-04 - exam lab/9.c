
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


int main(){
    char x[100];
    gets(x);

    for(int i=0; i<8; i++){
        if(x[i] == '1'){
            x[i] = '0';
            break;
        }
    }
    puts(x);
}
