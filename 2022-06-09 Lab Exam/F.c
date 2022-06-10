// NOT SOLVED
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int test;
    scanf("%d",&test);
    int res[100] = {0};
    for(int i=0; i<test; i++){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int length = strlen(str);
        //printf("Length = %d\n",length);
        //strrev(str);
        puts(str);
        bool isMob = false;
        for(int i=0; i<length; i++){
            //printf("%d = %d\n",i,str[i]);
            if(str[i]-'0' == 8 && length >=11){
                isMob = true;
            }
        }

        if(isMob){
             res[i] = 1;
        }
    }
    for(int i=0; i<test; i++){
        if(res[i] == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

