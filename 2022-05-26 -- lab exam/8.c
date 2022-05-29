#include<stdio.h>
#include<stdbool.h>

bool  is_reverese_sorted(int n, int a[]){
    for(int i =0; i<n-1; i++){
        if(a[i]< a[i+1]){
            return false;
        }
    }
    return true;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[]){
    for(int step=n-1; step>=0; step--){
        int maxElement = a[step], pos = step;
        for(int i=step; i>=0; i--){
            if(maxElement > a[i]){
                maxElement = a[i];
                pos = i;
            }
        }
        swap(&a[step],&a[pos]);
        if(is_reverese_sorted(n,a)) break;
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

