#include <stdio.h>
#include <string.h>

void change_values(int ar[], int N, int L, int R){
    for(int i =0; i<N; i++){
        if(i>=L && i<=R){
            ar[i] = 0;
        }
    }
}
int main(){
    int n, l,r;
    printf("Enter size of array N = \n");
    scanf("%d",&n);
    int myAr[n];
    printf("Enter elemrnts in array: \n");
    for(int i =0; i<n; i++){
        scanf("%d",&myAr[i]);
    }
    printf("Enter value of L = \n");
    scanf("%d",&l);
    printf("Enter value of R = \n");
    scanf("%d",&r);
    change_values(myAr,n,l,r);
    for(int i =0; i<n; i++){
        printf("%d ",myAr[i]);
    }
    return 0;
}

