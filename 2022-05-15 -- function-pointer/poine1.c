#include<stdio.h>

int main(){
    double pi = 3.1416;
    int *ptr;
    ptr = &pi;
    printf("pi = %lf\n",pi);
    printf("pi = %lf\n",*ptr);
    return 0;
}


/*
int main(){
 int n =10;
 int *p;

 p = &n;

 printf("*p  = %d \n",*p);
 printf("Address of p is = %p\n",p);
 return 0;
}

*/



/*
int main(){
 int n =10;
 printf("value x = %d \n",n);
 printf("Address of x is = %p\n",n);
 return 0;
}
*/
