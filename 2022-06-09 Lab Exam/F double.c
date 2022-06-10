// NOT SOLVED
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    int i = 0;
    int res[100] = {0};
    while( i < t){
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int cnt = -1;
        for (int j = 0; j<n; j++){
            if (str[j] == '8'){
                cnt = j;
                break;
            }
        }
        if(cnt == -1){
            //printf("NO");
            res[i] = 0;
        }else if(n-cnt<11){
            //printf("NO");
            res[i] = 0;
        }else{
            //printf("YES");
            res[i] = 1;
        }

        i++;
    }
    for (int k = 0; k<t; k++){
        if(res[k] > 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}

