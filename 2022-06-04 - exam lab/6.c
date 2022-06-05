#include<stdio.h>

struct Result {
    int vagfol;
    int vagshesh;
};


struct Result divideWithStruct(int x, int y){
    struct Result ans;
    ans.vagfol = x/y;
    ans.vagshesh = x%y;
    return ans;
}

int main(){
    int a = 8;
    int b = 5;
    struct Result response = divideWithStruct(a,b);
    printf("%d\n",response.vagfol);
    printf("%d\n",response.vagshesh);
}
