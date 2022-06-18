#include<stdio.h>
#include<string.h>
// binary to decimal

void decimalToBinary(unsigned int val, char str[]){
    int idx = 0;
    while(val > 0){
        int digit = val % 2;  // 2 is base for binary number
        val = val/2;
        str[idx] = '0' + digit;
        idx++;
    }

    for(int i = 0, j=idx-1; i<j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    str[idx] = '\0';
}


int main(){
    char str[100];
    unsigned int v = 45;
    decimalToBinary(v,str);
    printf("%s\n",str);
}
