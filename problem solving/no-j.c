/*

Let xyzxyz denote the 33-digit integer whose digits are xx, yy, zz from left to right.

Given a 33-digit integer abcabc none of whose digits is 00, find abc+bca+cababc+bca+cab.
abc is a 33-digit integer abcabc none of whose digits is 00.

Input is given from Standard Input in the following format: abc

*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int c = n%10;
    int b = (n/10)%10;
    int a = (n/100)%10;

    int x = a*100 + b*10 +c;
    int y = b*100 +c*10 + a;
    int z = c*100 + a*10 + b;
    int result = x + y + z;

    printf("%d",result);

    return 0;
}
