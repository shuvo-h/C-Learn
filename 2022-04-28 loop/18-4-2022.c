#include<stdio.h>
/*
int main(){
    for(int i=1; i<=5; i++){
        printf("Number is = %d\n", i);
    }
    return 0;
}
*/
/*
int main(){
    for(int i=1, j=9; i<=j; i++,j--){
        printf("Number is = %d vs %d\n", i,j);
    }
    return 0;
}
*/
/*
int main(){
    int i, j;
    for(; i<=j; i++,j--){
        printf("Number is = %d vs %d\n", i,j);
    }
    return 0;
}
*/
/*
int main(){
    int R=0;
    for (int i=5; i<=10; i++){
            R = R + 1;
        printf("Times= %d \n", R);
    }
    return 0;
}
*/

/*
int main(){
    for (int i=1, j=1; i+j<=10; i++, j++){
        printf("Times= %d \n", i);
    }
    return 0;
}
*/
/*
int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i=1; i<=n; i++) {
    	sum += i;
	}
	printf("%d", sum);
}
*/

int main() {
	for (int i=0; i<3; i++) {
    	for (int j=0; j<5; j++) {
        	printf("*");
    	}
	}
}
