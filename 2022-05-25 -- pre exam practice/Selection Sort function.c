
/*
Remember the Selection Sort function.

void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	int minelement = a[steps], pos = steps;
    	for (int i=steps; i<n; i++) {
        	if (a[i] < minelement) {
            	minelement = a[i];
            	pos = i;
        	}
    	}
    	swap(&a[steps], &a[pos]);
}

At every step we took the smallest element and moved it to the beginning. Rewrite the same function, but this time take the largest element and move it to the end, every iteration.

Example: Suppose you are sorting the array {2, 3, 1, 5, 4}. Then at the end of each step the array should look like as follows:
Step 1: 	2, 3, 1, 4, 5
Step 2: 	2, 3, 1, 4, 5
Step 3: 	2, 1, 3, 4, 5
Step 4: 	1, 2, 3, 4, 5
Step 5: 	1, 2, 3, 4, 5
*/

#include<stdio.h>
int min(int a, int b){
    return a < b ? a : b;
}
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int a[]){
    for(int step=n-1; step>=0; step--){
        int maxElement = a[step], pos = step;
        for(int i=step; i>=0; i--){
            if(maxElement < a[i]){
                maxElement = a[i];
                pos = i;
            }
        }
        swap(&a[step],&a[pos]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    sort(n,ar);

    for(int i=0; i<n; i++ ){
        printf("%d ",ar[i]);
    }
}

