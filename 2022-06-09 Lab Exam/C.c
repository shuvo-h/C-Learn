

#include<stdio.h>

int main(){
    char str[1001];
    gets(str);
    int count[10]={0};
    for(int i=0; i<strlen(str); i++){
       // printf("%d\n",str[i] - 0 - '0');
        int numIdx = str[i] - 0 - '0';
        if(numIdx <= 9){
            //printf("inser array %d = %c\n",numIdx,str[i]);
            count[numIdx]++;
        }
    }
    for(int i=0; i<sizeof(count)/sizeof(count[0]); i++){
        printf("%d ",count[i]);
    }


    return 0;
}
