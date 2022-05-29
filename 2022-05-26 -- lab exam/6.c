#include<stdio.h>

void sort(int n, int a[]) {
    for (int steps=0; steps<n; steps++) {
        for (int i=n-1; i>0; i--) {
           ///Write code here
           if(a[i] < a[i-1]){
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
       }
   }
}


int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    sort(n,ar);

    for(int i=0; i<n; i++ ){
        printf("%d ",ar[i]);
    }
}

