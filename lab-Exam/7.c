/*
How can you use the return by address mechanism to return two integers from a function? Explain with an example.
*/

int getLargeAndSmall(int a, int b, int *large, int *small ){
    if(a > b){
        *large = a;
        *small = b;
       // return 1 if a is large
        return 1;
    }else{
        *large = b;
        *small = a;
        // return -1 if b is large
        return -1;
    }
}

int main(){
    int num1 = 5;
    int num2 = 6;
    int largeNum, smallNum;
    int result = getLargeAndSmall(num1,num2, &largeNum, &smallNum);
    if(result == 1){
        printf("The first paramer is larger\n");
        printf("Large number is %d\n",largeNum);
        printf("Small number is %d\n",smallNum);
    }else if(result == -1){
        printf("The Second paramer is larger\n");
        printf("Large number is %d\n",largeNum);
        printf("Small number is %d\n",smallNum);
    }
}
