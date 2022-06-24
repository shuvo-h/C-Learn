
#include <stdio.h>
struct Fun{
    int sum;
};

int main(){
    struct Fun myFun = {5};
    struct Fun *pFun = &myFun;
    pFun->sum = 8;
    printf("%d",myFun.sum);
     printf("%d",pFun->sum);
}


