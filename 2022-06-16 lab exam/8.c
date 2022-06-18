#include <stdio.h>
#include <stdbool.h>

    // i) Has return + Has parameter
bool odd_even(int num){
    bool isEven = false;
    if(num % 2 == 0){
        isEven = true;
    }
    return isEven;
}


    // ii) No return + Has parameter
void odd_even(int num){
    bool isEven = false;
    if(num % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}



    // iii) Has return + No parameter
bool odd_even(){
    int num;
    scanf("%d",&num);
    bool isEven = false;
    if(num % 2 == 0){
        isEven = true;
    }
    return isEven;
}

    // iv) No return + No parameter
void odd_even(){
    int num;
    scanf("%d",&num);
    bool isEven = false;
    if(num % 2 == 0){
        printf("Even\n");
    }else{
        printf("Odd\n");
    }
}


int main(){
    // bool checkEvenOdd = odd_even(8);
    // odd_even(9);
    // bool checkEvenOdd = odd_even();
    odd_even();
    /*
    if(checkEvenOdd){
        printf("Even");
    }else{
        printf("Odd");
    }
    */
    return 0;
}

