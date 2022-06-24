#include<stdio.h>

void arrangNumber(){
    int number;
    int arr[1000];

    scanf("%d",&number);
    for(int i = 1; i<=number; i++){
        scanf("%d",&arr[i]);
    }
    int left = 1, right = number;
    while(left<=right){
        if(left == right){
            printf("%d ", arr[left]);
        }else{
            printf("%d %d ", arr[left],arr[right]);
        }
        left++, right--;
    }
    puts("");

}

int main(){
    int time;
    scanf("%d",&time);
    while(time > 0){
        arrangNumber();
        time--;
    }
    return 0;
}


