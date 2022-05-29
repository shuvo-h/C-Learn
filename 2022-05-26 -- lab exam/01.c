/*

#include<stdio.h>
int main(){

    return 0;
}

*/

#include<stdio.h>
int makeDouble(int a){
    a = 2*a;
    return a;
}
void makeTriple(int *a){
     *a  = *a * 3;
}
int main(){
    int number = 10;
    int doubleNumber =  makeDouble(number);
    printf("The double number is %d\n",doubleNumber);
    makeTriple(&number);
    printf("The triple number is %d\n",number);
    return 0;
}
