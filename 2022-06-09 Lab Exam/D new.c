// NOT SOLVED
#include<stdio.h>
#include<string.h>

int main(){
    int test;
    scanf("%d",&test);
    int final_res[test];
    for(int k=0; k<test; k++){
        final_res[k] = -1;
    }
    for(int j=0; j<test; j++){
        int inputNumber;
        scanf("%d",&inputNumber);
        int num[inputNumber];
        int res[10] = {0};
        for(int i=0; i<inputNumber; i++){
            scanf("%d",&num[i]);
            res[num[i]]++;
        }
        /*
        for(int i=0; i<inputNumber; i++){
            //printf("%d\n",i);
            res[num[i]]++;
        }
        */
        for(int i=0; i<10; i++){
            if(res[i] > 2){
                final_res[j] = i;
            }
        }
    }

    for(int i=0; i<test; i++){
        printf("%d\n",final_res[i]);
    }
    return 0;
}


