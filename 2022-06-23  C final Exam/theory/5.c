#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s",&s);
    int len = strlen(s);
    int counter[10] = {0};
    for(int i =0; i<len; i++){
       if(s[i] >= '0' && s[i]<= '9'){
        counter[ s[i] - '0' ]++;
       }
    }
    for(int i =0; i<sizeof(counter)/sizeof(counter[0]); i++){
        if(counter[i] == 0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}

