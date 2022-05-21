#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6}, min=0;
    for(int i=0;i<6;i++) {
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    printf("%d\n",min);
}



