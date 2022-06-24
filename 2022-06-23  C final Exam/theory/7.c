#include <stdio.h>
#include <stdbool.h>

int main(){
    int N, mul;
    printf("Enter the Array size N = ");
    scanf("%d",&N);
    int ar[N];
    printf("\nEnter the Array Elements = ");
    for(int i=0; i<N; i++){
        scanf("%d",&ar[i]);
    }
    printf("\nEnter the mul value = ");
    scanf("%d",&mul);
    bool isMul = false;
    for(int i=0; i<N-1; i++){
        for(int j= i+1; j<N; j++){
            if(ar[i] * ar[j] == mul){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}

