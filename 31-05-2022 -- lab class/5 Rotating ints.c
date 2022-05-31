

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
// get i-th bit
// set i-th bit    -> make 1;
// clear i-th bit  -> make 0;
// flip i-th bit   -> 0 to 1, 1 to 0; (just reverse)

struct Binary {
    char str[50];
};
char *strrev(char *str){
    if(!str || !*str) return str;
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
struct Binary toBinary(unsigned int val, int k){
    struct Binary ans;
    int idx = 0;
    while(val >0){
        int d = val%2;
        val = val/2;
        ans.str[idx] = '0' + d;
        idx++;
    }
    for(int i = idx; i<k; i++) ans.str[i] = '0';
    ans.str[k] = 0;
    strrev(ans.str);

    return ans;
}

bool getBit(unsigned int mask,int k){
    return (mask & (1<<k)) != 0;  // AND leftshift
}

unsigned int setBit(unsigned int mask, int k){
    return mask | (1 << k);  // OR leftshift
}

unsigned int clearBit(unsigned int mask, int k){
    return mask & ~(1 << k);  // AND NOT leftshift
}
unsigned int flipBit(unsigned int mask, int k){
    return mask ^(1 << k);  // XOR leftshift
}
unsigned char RightRotate(unsigned char mask, int k){
    int lastK = mask & ((1<<k)-1);
    return (mask >> k) | (lastK << (8-k));
}
unsigned char LeftRotate(unsigned char mask, int k){
    int firstK = mask & ((1>>k)-1);
    return (mask << k) | (firstK >> (8-k));
}
int main(){
    unsigned char x = 54;
    printf("%d = %s\n",x,toBinary(x,8).str);
    for(int i = 0; i<8; i++){
            unsigned char R = RightRotate(x,i);
         printf("Rotate %d: = %s\n",i,toBinary(R,8).str);
    }
    printf("Left Rotate part: \n");
    for(int i = 0; i<8; i++){
            unsigned char L = LeftRotate(x,i);
         printf("Rotate %d: = %s\n",i,toBinary(L,8).str);
    }
}
