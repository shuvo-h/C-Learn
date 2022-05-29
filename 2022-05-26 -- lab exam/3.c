
#include<stdio.h>
#include<string.h>
void makeStrCopy(char in[], char out[]){
    int length = strlen(in);
    for(int i=0; i<length; i++){
        out[i] = in[i];
    }
}
int main(){
    char in[] = "hello";
    char out[100];
    makeStrCopy(in,out);
    printf("res:\n");
    puts(out);
    return 0;
}
