#include<stdio.h>
#include<string.h>

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

/*
int main(){
	char s[100];
	char a[100];
	scanf("%s",&s);
	int strSize = strlen(s);
	int j = 0;
	for (int i = 0;i < strSize; i++){
		if (s[i] != '+'){
			a[j] = s[i];
			j++;
		}
	}
	sortArr(&a, strlen(a));
	for (int i = 0;i < j;i++){
		if (i == j - 1){
            printf("%s", a[i]);
		}else{
		    printf("+%s", a[i]);
		}
	}
	return 0;
}
*/
/*
int main(void){
	char s[100];
	while(scanf("%s",s)!=EOF){
		int l=strlen(s);
		char a[100];
		int b=0;
				for(int i=0;i<l;i++){
			if(s[i]>='1'&&s[i]<='9') a[b++]=s[i];
		}
				sortArr(a,strlen(a));
				for(int i=0;i<b;i++){
			if(i==0) printf("%c",a[i]);
			else printf("+%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}

*/

int main(){
    char num[105];
    scanf("%s",num);
    for(int i=0; i<strlen(num)-1; i+=2){
        for(int j=0; j<strlen(num)-i-2; j++){
            if(num[j]>num[j+2]){
                char temp = num[j];
                num[j] = num[j+2];
                num[j+2] = temp;
            }
        }
    }
    printf("%s\n",num);
    return 0;
}
