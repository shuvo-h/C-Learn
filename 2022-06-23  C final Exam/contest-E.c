/*
#include<stdio.h>
#include<stdlib.h>
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        qsort (a, sizeof(a)/sizeof(*a), sizeof(*a), comp);
        int min=a[1]-a[0];
        for(int i=2; i<n; i++)
        {
            if((a[i]-a[i-1])<min)
            {
                min=a[i]-a[i-1];
            }
        }
        printf("%d\n",min);
    }
}
*/


#include<stdio.h>
#include <limits.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortArr(int arr[], int n){
    int i, j, min_idx;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}


int main(){
	int times;
	scanf("%d",&times);
	int a[55];
	int n;
	while (times > 0){
		scanf("%d",&n);
		for (int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		sortArr(a +1, n);
		int min = INT_MAX;
		for (int i = 1; i < n; i++){
			int k = a[i + 1] - a[i];
			if (k < min)
				min = k;
		}
		printf("%d\n",min);
		times--;
	}
	return 0;
}


/*
int main(){
	int times;
	scanf("%d",&times);
	int a[55];
	int n;
	while (times > 0){
		scanf("%d",&n);
		for (int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
		}
		sortArr(a +1, n);
		int min = 0x3f3f3f3f;
		for (int i = 1; i < n; i++){
			int k = a[i + 1] - a[i];
			if (k < min)
				min = k;
		}
		printf("%d",min);
		times--;
	}
	return 0;
}
*/


