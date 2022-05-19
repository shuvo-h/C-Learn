// Write a function to find the area of a rectangle given its length and width.

#include<stdio.h>
float gerTriangleArea(float base, float height){
    //printf("base: %lf, hei: %lf\n",base,height);
    float area = (base * height)/2;
    //printf("area: %lf\n",base + height);
    return area;
}

int main(){
    float b,h;
    printf("Input base and height: ");
    scanf("%f %f",&b,&h);
    //printf("<> BB = %f, <> HH = %f\n",b,h);
    float totalArea = gerTriangleArea(b,h);
    printf("The area is : %lf sq unit\n",totalArea);
    return 0;
}
