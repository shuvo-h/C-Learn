#include<stdio.h>
#include<string.h>

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
    unsigned int x;
    unsigned int y;
    scanf("%d %d",&x,&y);


    unsigned int small;
    unsigned int large;
    if(x>y){
        large = x;
        small = y;
    }else{
        large = y;
        small = x;
    }
    unsigned int xorSmall = small;

    for(int i = small+1; i<=large; i++){
        unsigned int tempSmall = xorSmall ^ i;
        xorSmall = tempSmall;
    }
    printf("xor = %d\n",xorSmall);
}


