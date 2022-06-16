#include <stdio.h>

int fun(int a)

{
	a=100;

	return a;
}

void main()

{
	int x = 0;

	x=fun(x);

    printf("%d", x);
}
