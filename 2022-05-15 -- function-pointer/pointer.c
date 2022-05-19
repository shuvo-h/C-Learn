#include<stdio.h>
/*
int main(){
    int num = 10;
    int *ptr;
    ptr = &num;
    printf("pi = %d\n",num);
    *ptr = 15;
    printf("pi = %d\n",num);
    printf("address = %p\n",&num);
     printf("address = %p\n",ptr);
    return 0;
}
*/

void update(int n, char a[]) {n++;a[0] = '0';}
int main() {int n = 10;char a[] = "10000";update(n, a);printf("%d %s", n, a);}

