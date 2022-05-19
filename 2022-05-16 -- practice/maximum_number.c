// Write a function that will take an array and find its maximum.
#include<stdio.h>
#include<limits.h>
int getMax(int arr[]){
    int tempMax = INT_MIN;
    int length = sizeof arr/sizeof arr[0];
    printf("fun array Length = %d\n",length);
    int count =0;
    for(int i = 0; i<=length; i++){
        printf("count %d = %d\n",count,tempMax);
        if(arr[i]>tempMax){
            tempMax = arr[i];
        }
        count++;
    }
    return tempMax;
}

int main(){
    int n;
    printf("Enter the size number : ");
    scanf("%d",&n);
    int numbers[n];
    for(int i=0; i<n; i++){
        scanf("%d",&numbers[i]);
    }
    int length = sizeof numbers/sizeof numbers[0];
    printf("main array length = %d\n",length);
    int maxValue = getMax(numbers);
    printf("The maximum number is = %d\n",maxValue);
    return 0;
}
