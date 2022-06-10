// NOT YET APPROVED

#include<stdio.h>
#include<string.h>

int main(){
    char s[1001];
    gets(s);
    int strLength = strlen(s);
    //printf("Length = %d\n",strLength);
    int exist[strLength];
    for(int i=0; i<strlen(s); i++){
        exist[i]=0;
    }
    for(int i=1; i<(strlen(s))-1; i++){
            int val = s[i];
        //printf("val = %d\n",val);
            if( (val>='a')&&(val<='z') ){
                exist[s[i]-'a'] = 1;
                //printf("Printing %d = %c,\n",s[i]-'a',s[i]);
            }
    }
    int count = 0;
    for(int i=0; i<sizeof(exist)/sizeof(exist[0]); i++){
        exist[s[i]-'a'] = 1;
        if(exist[i] == 1){
            count++;
        }
    }
    printf("%d",count);
}
