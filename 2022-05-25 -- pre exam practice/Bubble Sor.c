/*
Remember the Bubble Sort function.


void sort(int n, int a[]) {
	for (int steps=0; steps<n; steps++) {
    	for (int i=0; i+1<n; i++) {
        	if (a[i] > a[i+1]) {
            	swap(&a[i], &a[i+1]);
        	}
    		}
		if (is_sorted(n, a))	break;

	}
}

Implement the is_sorted() function to optimize the function.
*/

#include<stdio.h>
#include<stdbool.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int is_shorted(int n, int a[]){
    for(int i =0; i<n; i++){
        if(a[i]>a[i+1]){
             return -1;
            //return false;
        }
    }
     return 1;
    //return true;
}

 // 2 1 3 4 5  => 1 2 3 4 5
 // 5 4 3 2 1 => 1 2 3 4 5

void sort(int n, int a[]){
    for(int steps=0; steps<n; steps++){
        for(int i=0; i+1<n; i++){
            if(a[i] > a[i+1]){    // "<" to arrange in reverse way
                swap(&a[i],&a[i+1]);
            }
        }
        printf("%d\n",steps);
        if(is_shorted(n,a) == 1) break;
        //if(is_shorted(n,a)) break;
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
