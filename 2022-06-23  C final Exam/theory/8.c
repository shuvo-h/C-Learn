#include <stdio.h>

int main(){
    int N, mul;
    printf("Enter the value of N = ");
    scanf("%d",&N);
    int isEven = N%2;
    for(int i=0; i<N; i++){
            if( i < N/2){
                for(int j=0; j<=i; j++){
                  printf("*");
                }

            }else{
                if(isEven == 0){
                    for(int j=N-i-1; j>0; j--){
                      printf("*");
                    }
                }else{
                    for(int j=N-i; j>0; j--){
                      printf("*");
                    }
                }
            }

        printf("\n");
    }
    return 0;
}

