
#include<stdio.h>
#include<stdbool.h>


int count_swaps(int *arr, int n){
    int swapCounter = 0;

    for(int pos = 0; pos<n-1; pos++){
         for(int check = pos+1; check<n-1; check++){
            if(arr[check] < arr[pos]){
                int temp = arr[check];
                arr[check] = arr[pos];
                arr[pos] = temp;
                swapCounter++;
            }
         }
    }
    return swapCounter;
}

int main(){
   int arr[6] = {2,5,10,3,14,20};
   int count = count_swaps(arr,6);
   for(int i = 0; i<6; i++){
    printf("%d ",arr[i]);
   }
   printf("\nTotal swap count = %d \n",count);
}



