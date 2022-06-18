
#include<stdio.h>
#include<stdbool.h>


bool check_array(int *arr, int N){
    int numbers[N];
    for(int i = 0; i<N; i++){
        numbers[i] = i+1;
    }

    for(int i = 0; i<N; i++){
            bool isNumber = false;
        for(int j = 0; j<N; j++){
            if(numbers[i] == arr[j]){
                isNumber = true;
            }
        }
        if(!isNumber){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5};

    bool isTrue = check_array(arr,5);
    if(isTrue){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}


