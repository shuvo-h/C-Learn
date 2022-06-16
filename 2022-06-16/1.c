
#include<stdio.h>

float make_sum(float a, float b){
    return a + b;
}

int main(){
    float x = 10.327;
    float y = 11.328;

    float sum = make_sum(x,y);
    printf("  sum  = %f\n", sum);
}
