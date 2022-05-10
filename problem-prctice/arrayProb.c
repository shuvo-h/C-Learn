#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int nums[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&nums[i]);
    }

    for(int i = 0, j = n-1; i < n, j>= 0; i++, j--){
            if( i < j){
                int temp = nums[i];
                //printf("%d\n",nums[i]);
                nums[i] = nums[j];
                nums[j] = temp;
            }
        //printf("%d\n",nums[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ",nums[i]);
    }
}


/*
int main(){
    int n;
    scanf("%d",&n);
    int nums[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&nums[i]);
    }
    int revNums[n];
    for(int i = 0; i < n; i++){

            //printf("%d\n",nums[i]);
            revNums[i] = nums[n-i-1];


        //printf("%d\n",nums[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ",revNums[i]);
    }
}
*/
