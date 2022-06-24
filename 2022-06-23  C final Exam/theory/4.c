#include <stdio.h>
/*
int main(){
    int arr[100], freq[100];
    int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }

    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++){
        if(freq[i] != 0){
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
*/

int main(){
    long long int arr[100], freq[100];
    long long int n, i, j, count;
    printf("Enter size of array: ");
    scanf("%lld", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++){
        scanf("%lld", &arr[i]);
        freq[i] = -1;
    }

    for(i=0; i<n; i++){
        count = 1;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0){
            freq[i] = count;
        }
    }

    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<n; i++){
        if(freq[i] != 0){
            printf("%lld occurs %lld times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
