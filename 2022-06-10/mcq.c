#include<stdio.h>

int main()

{
    char str[]="hello";

    char *ptr = str;

    printf(ptr);

    return 0;
}


/*
#include<stdio.h>

int main()

{

    char mystring[] = "abcdefg";

    char *ptr = mystring;

    ptr+=5;

    printf("%s",ptr);

    return 0;

}
*/
/*
#include<stdio.h>

int main()

{
	char mystring[] = "abcdefg";

	char *ptr = mystring;

    printf("%s",ptr);

	return 0;
}
*/

/*
#include<stdio.h>

int main()

{
	int a[] = {1,6,3,4,5}, *p;

	p = a;

	++*p;

	printf("%d ", *p);

	p += 2;

	printf("%d ", *p);

	return 0;
}
*/
