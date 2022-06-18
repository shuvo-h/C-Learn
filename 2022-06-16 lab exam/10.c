
#include <stdio.h>

void  change_array(int *nums,int n,int *revNums,int m){
    for(int i = 0, j = m-1; i<n; i++,j--){
        revNums[j] = nums[i];
    }
}

int main(){
    int numbers[] = {1,2,3,4,5};
    int revNumbers[5];
    change_array(&numbers,5,&revNumbers,5);
    for(int i = 0; i<5; i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");
    for(int i = 0; i<5; i++){
        printf("%d ",revNumbers[i]);
    }

    return 0;
}
