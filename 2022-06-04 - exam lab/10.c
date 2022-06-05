

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

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


unsigned int setLast4Bit(unsigned int mask, int k){
     return mask &= ~ ((1 << k) - 1);
}


int main(){
    int x;
    scanf("%d",&x);
    printf("%d = %s\n", x, toBinary(x,8).str);

    printf("Set the last 4 Bit: %s\n",toBinary(setLast4Bit(x,4),8).str);
}
