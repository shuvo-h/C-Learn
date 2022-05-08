
#include<stdio.h>
// fibonacchi series 0,1,1,2,3,5,8,13,21,34..........
int main(){
    int n;
    printf("Enter the series number: %d\n");
    scanf("%d",&n);
    long long fibonacci[n];
     fibonacci[0] = 0;
     fibonacci[1] = 1;
    for(int i = 2; i<n; i++){
        fibonacci[i] = fibonacci[i-1] +  fibonacci[i-2];
    }
    for(int i = 0; i<n; i++){
        printf("%lld, ",fibonacci[i]);
    }
    return 0;
}
/*
int main(){
    char word[] = {'h','e','l','l','o'};
    int wordSize = sizeof(word)/sizeof(word[0]);
    printf("Array length is = %d\n\n",wordSize);
    for(int i=0; i<wordSize; i++){
        putchar(word[i]);
    }
    return 0;
}
*/
/*
int main(){
    double mark[] = {1,2,3};  // assign the value in arrau during decleration
    int arraySize = sizeof(mark)/sizeof(mark[0]);
    printf("Array length is = %d\n\n",arraySize);
    for(int i=0; i<3; i++){
        printf("%lf\n",mark[i]);
    }
    return 0;
}

*/


/*
#include<stdio.h>
int main(){
    int mark[3];
    for(int i=0; i<3; i++){
        printf("Enter student %d mark",i);
        scanf("%d",&mark[i]);
    }
    for(int i=0; i<3; i++){

        printf("%d",mark[i]);
    }
    return 0;
}
*/
