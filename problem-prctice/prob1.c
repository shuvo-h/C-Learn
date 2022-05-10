#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    int year;
    scanf("%d",&t);

    for(int i = 0; i<t; i++){
        char str[101];
        scanf("%s",str);

        int len = strlen(str);
        if( len <= 10){
            printf("%s\n",str);
        }else{
            printf("%c%d%c",str[0],len-2,str[len-1]);
        }
    }

    return 0;
}


/*
int main(){
    int t;
    scanf("%d",&t);

    for(int i = 0; i<t; i++){
        char str[101];
        scanf("%s",str);

        int len = strlen(str);
        if( len <= 10){
            printf("%s\n",str);
        }else{
            printf("%c%d%c",str[0],len-2,str[len-1]);
        }
    }

    return 0;
}
*/

/*
int main(){
    int n;
    scanf("%d",&n);
    int score[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&score[i]);
    }
    int ans = 0;
    for(int i = 0; i<3; i++){
        if(i == 0) continue;
        bool isMax = true, isMin = true;
        for(int j=0; j<i; j++){
            if(score[j] <= score[i]){
                isMin = false;
            }
             if(score[j] >= score[i]){
                isMax = false;
            }
        }
        if(isMax || isMin){
                ans++;
            }
    }
    printf("Answer is = %d\n", ans);
    return 0;
}
*/
/*
int main(){
    int to[10];
    for(int i = 0; i<10; i++){
        scanf("%d",&to[i]);
    }
    int current = 0;
    for(int i = 0; i<3; i++){
        current = to[current];

    }
    printf("Current Press value = %d\n", current);
    return 0;
}
*/

/*
int main(){
    char num[10];
    gets(num);
    int freq[10] = {0};
    for(int i = 0; i< 9; i++){
        char c = num[i];
        int digit = c - '0';
        freq[digit]++;
    }
    int ans;
    for(int i = 0; i<=9; i++){
            if(freq[i] == 0){
                ans = i;
            }
    }
    printf("none number is => %d\n",ans);
    return 0;
}
*/


/*
int main(){
    int nums[9];

    for(int i = 0; i<9; i++){
        scanf("%d",&nums[i]);
    }
    int ans;
    for(int i = 0; i<9; i++){
                 for(int j=9; j >= 0; j--){
            if(i <= j){
            if(nums[i] == nums[j]){
                    printf("%d = %d\n",nums[i],nums[j]);
                ans = nums[i];
            }
        }
            }

    }
    printf("Repeated number is = %d\n",ans);

    return 0;
}

*/
