/*
We wrote a program to find all positions of a character in a string. Now write a program to find all positions of a pattern string in a text string. Use the strstr function.

	Example: Suppose text = “pro programming product” and pattern = “pro”.
	Your program should print:

	pro found at position 0.
	pro found at position 4.
pro found at position 16.

*/

#include<stdio.h>
#include<string.h>
int main(){
// not solved YET
    char text[100] , pattern;
    gets(text);
    scanf("%c",&pattern);

    char *cur = text;

    while(cur){
            printf("insde loop");
         //char *pos = strchr(cur,pattern);
        char *pos;
        pos= strstr(cur,pattern);
        //if(pos == NULL) break;
        printf("Found at %d\n",pos - text);
        cur = pos+1;
    }

}


/*
#include <stdio.h>

int main() {
   char s1 [] = "My House is small";
   char s2 [] = "My Car is green";

   printf ("Returned String 1: %s\n", strstr (s1, "House"));
   printf ("Returned String 2: %s\n", strstr (s2, "Car"));
}
*/

