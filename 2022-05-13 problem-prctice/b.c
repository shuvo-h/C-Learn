#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int numbers[n];
    for(int i = 0; i <n; i++){
        scanf("%d",&numbers[i]);
    }
    int largest_number = 0;
    for(int i = 0; i<n ; i++){
        if(numbers[i] > largest_number){
            largest_number = numbers[i];
        }
    }
    int total_require = 0;
    for(int i = 0; i < n; i++){
        int ind_require = largest_number - numbers[i];
        total_require += ind_require;
    }
    printf("%d",total_require);
}
