/*
 Find the output of the following code.
int a = 10;
int b = 20;
int *p = &a;
printf(“%d %d %d\n”, a, b, *p);
*p = 30;
printf(“%d %d %d\n”, a, b, *p);
*p = 20;
a = 50;
b = 10;
printf(“%d %d %d\n”, a, b, *p);
p = &b;
printf(“%d %d %d\n”, a, b, *p);
a = 20;
b = 100;
printf(“%d %d %d\n”, a, b, *p);

*/

int main(){
    int a = 10;
    int b = 20;
    int *p = &a;
    printf("%d %d %d\n", a, b, *p);
    *p = 30;
    printf("%d %d %d\n", a, b, *p);
    *p = 20;
    a = 50;
    b = 10;
    printf("%d %d %d\n", a, b, *p);
    p = &b;
    printf("%d %d %d\n", a, b, *p);
    a = 20;
    b = 100;
    printf("%d %d %d\n", a, b, *p);

}
