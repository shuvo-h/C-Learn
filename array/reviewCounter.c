

#include<stdio.h>
// Review counter
int main(){
    int n;
    printf("Enter the review number: %d\n");
    scanf("%d",&n);
    int ratings[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&ratings[i]);
    }
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += ratings[i];
    }
    double average = (double)(sum)/n;
    printf("average: %lf",average);

    for(int i = 0; i<=5; i++){
        int times = 0;
        for(int j = 0; j<=n; j++){
                if(ratings[j] == i){
                times += 1;
            }
        }

        printf("%d has => %d times \n",i,times);
    }

    return 0;
}
