
// NOT SOLVED
#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    int res[test];
    for(int k=0; k<test; k++){
        res[k] = -1;
    }

    for(int i=0; i<test; i++){
        int len;
        scanf("%d",&len);
        int a[len];
        int counter[200000] ={0};
        for(int j=0; j<len; j++){
            scanf("%d",&a[j]);
            //printf("%d a value = %d\n",j,a[j]);
            counter[a[j]]++;
            //printf("%d counter = %d\n",j,counter[a[j]]);
        }
        for(int j=0; j<200000; j++){
           // printf("%d counter = %d\n",j,counter[j]);
            if(counter[j] > 2){
                    res[i] = j;
                   // printf("%d\n",j);
               // printf("%d counter = %d\n",j,counter[j]);
            }
        }
    }
    for(int k=0; k<test; k++){
        printf("%d\n",res[k]);
    }
    return 0;
}


