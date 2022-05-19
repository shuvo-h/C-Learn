#include<stdio.h>

void rotateWithL(int length,int numbers[]){
   int first = numbers[0];
    for(int i=0; i<length; i++){
        numbers[i] = numbers[i+1];
    }
    numbers[length-1] = first;
}

void timesRotate(int length,int array[],int times){
    printf("%d \n",length);
    for(int i=0; i<times; i++){
        rotateWithL(length,array);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    int  times = 0;
    scanf("%d",&times);
     timesRotate(n,nums,times);
    for(int i=0; i<n; i++){
        printf("%d ",nums[i]);
    }


}
