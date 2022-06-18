

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
    unsigned int x = 10;
    unsigned int y = 35;
    char sx[100], sy[100], sand[100], sor[100],xsor[100],snot[100];
    toBinary(x,sx,8);
     toBinary(y,sy,8);


     printf("sy = %s\n",sx);
     printf("sx = %s\n",sy);
    /*
    AND = &
        10 -> 0 0 0 0 1 0 1 0
        35 -> 0 0 1 0 0 0 1 1
    10&35 ->  0 0 0 0 0 0 1 0    // 10 and 35 er binary theke ekta ekta kore milabe, jodi dujoner ekoi position er bumber 1 hoy, taole 1 hobe, otherwise 0
    */
    unsigned int and = x & y;  // for & operatio: 00 = 0, 01 = 0, 10 = 0; 11 = 1   // dujon 1 holei 1
    toBinary(and,sand,8);
    printf("and = %d\n",and);
    printf("and = %s\n",sand);

      // for || or operator: 00 = 0, 01 = 1, 10 = 1, 11 = 1, // jekono ekjon 1 holei result 1 hobe
    /*
    OR = |
        10 -> 0 0 0 0 1 0 1 0
        35 -> 0 0 1 0 0 0 1 1
    10||35 ->  0 0 1 0 1 0 1 1    // 10 and 35 er binary theke ekta ekta kore milabe, jodi dujoner ekoi position er bumber theke jekono ekti 1 hoy, taole 1 hobe, otherwise 0
    */
    unsigned int or = x | y;  // for & operatio: 00 = 0, 01 = 0, 10 = 0; 11 = 1   // dujon 1 holei 1
    toBinary(or,xsor,8);
    printf("or = %d\n",or);
    printf("or = %s\n",xsor);

    /*
    XOR = ^
    0 1 -> 1
    1 0 -> 1   // vinno holei 1 dey
    0 0 -> 0
    1 1 -> 0   // same holei 0 dey
        10 -> 0 0 0 0 1 0 1 0
        35 -> 0 0 1 0 0 0 1 1
    10^35 ->  0 0 1 0 1 0 0 1
    */
    unsigned int xor = x ^ y;
    toBinary(xor,sor,8);
    printf("xor = %d\n",xor);
    printf("xor = %s\n",sor);

    /*
    NOT
    35 -> 0 0 1 0 0 0 1 1
          1 1 0 1 1 1 0 0 // jesob jaygay 1 chilo tara 0 hobe, ar 0 gulo 1 hobe
    */
    unsigned int not = ~y;
    toBinary(not,snot,8);
    printf("not = %d\n",not);
    printf("not = %s\n",snot);
}
