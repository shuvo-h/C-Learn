#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool  is_reverese_sorted(int n, int a[]){
    for(int i =0; i<n-1; i++){
        if(a[i]< a[i+1]){
            return false;
        }
    }
    return true;
}


void sort(int n, int a[]){
    for(int steps=0; steps<n; steps++){
        for(int i=0; i+1<n; i++){
            if(a[i] < a[i+1]){    // "<" to arrange in reverse way
                swap(&a[i],&a[i+1]);
            }
        }
       // printf("steps = %d\n",steps);
        //if(is_shorted(n,a) == 1) break;
        if( is_reverese_sorted(n,a)){
            return;
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
