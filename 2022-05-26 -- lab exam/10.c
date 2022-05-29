
#include <stdio.h>
#include <string.h>

/*
int main () {
   const char text[20] = "banana";
   char *res;

   res = strstr(text, "a");

   printf("The searched position is = %d\n", res-text+1);

   return(0);
}

*/


int main ()
{
  char text[55] ="banana";
  char *p;
  p = strchr (text,'a');

  printf ("The searched position is = %d\n",p-text+1);

   return 0;
}

/*

int main () {
   const char text[20] = "Programmer";
   const char pattern[] = "a";
   char *ret;

   ret = strchr(text, "a");

   printf("The substring is: %d\n", ret);

   return(0);
}

*/
