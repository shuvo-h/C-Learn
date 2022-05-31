
#include<stdio.h>
#include<string.h>
// number store in memory

// 1 char = 1x8 bit = 1 byte   >> 12 to store in memory = 00001010 ; total 8 piece 0 & 1
// 1 int = 1*8 bit = 1 byte
// 4 int = 4x8 bit =           >> 4 int require 4*8 = 32 bit; so total 32 piece 0&1; 000000000000000000000000010110
        //876543210
//  256 = 100000000
// +12 = 00001010
// -12 = 10001010

char *strrev(char *str){
    if(!str || !*str){
        return str;
    }
    int i = strlen(str) - 1, j = 0;
    char ch;
    while(i>j){
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}
void toBinary(unsigned int val, char str[], int k){
    int idx = 0;
    while(val > 0){
        int d = val%2;
        val = val/2;
        str[idx] = '0' + d;
        idx++;
    }
    for(int i = idx; i<k; i++) str[i] = '0';
    str[k] = 0;
    strrev(str);
}
int main(){
    unsigned int x = 10;
    unsigned int y = 35;
    char sx[100], sy[100];
    toBinary(x,sx,8);
     toBinary(y,sy,8);
     printf("%s\n",sx);
     printf("%s\n",sy);
}
