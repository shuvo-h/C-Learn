
#include<stdio.h>

float make_average(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];

    }
    float average = (float)sum/n;
    return average;
}

int main(){
    int n = 2;
    int numArr[4] = {2,3};
    float average = make_average(numArr, n);
    printf("  average  = %.3f\n", average);
}



/*
#include <stdio.h>
int main() {
    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
*/
