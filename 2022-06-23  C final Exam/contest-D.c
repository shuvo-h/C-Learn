
#include<stdio.h>


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArr(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}



int main(){
    int n,m;
    int arr[105];
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        arr[i] = -arr[i];
    }
    sortArr(arr+1,n);
    int result=0;
    for(int i=n;i>=1&&i>n-m;i--)    {
        if(arr[i]>0){
            result+=arr[i];
        } else {
            break;
        }
    }
    printf("%d",result);

    return 0;
}


