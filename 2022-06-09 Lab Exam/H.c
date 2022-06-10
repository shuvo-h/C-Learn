
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main(){
    char s[100];
    scanf("%s",&s);
    int counter0 = 0;
    int counter1 = 0;
    bool isTrue = false;
    for(int i=0; i<strlen(s); i++){
       // printf("%d",s[i]-'0');
        if(s[i]-'0' == 0) {
            counter0++;
            counter1 = 0;
        }
        if(s[i]-'0' == 1) {
            counter1++;
            counter0 = 0;
        }
        if(counter0 >= 7 || counter1 >= 7) isTrue = true;
    }

    if(isTrue){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}


