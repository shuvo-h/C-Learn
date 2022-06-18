#include<stdio.h>
//#include<string.h>

int main(){
    char str[] = "Hello World";
    int sz = sizeof(str)/sizeof(str[0]);
    puts(sz);
    printf("Size is = %d \n",sz);
    return 0;
}


/*
int main(){
    //char myString[] = "I am a developer.";
    //char newString[50];
    //printf("%s\n",myString);
    //puts(myString);
    //puts("Enter new String:");
    //gets(newString);
    //puts(newString);
    //char country[10];
    //printf("Enter the country name: ");
    //scanf("%s",country);
    //gets(country);
    //fgets(country,10,stdin);
    //printf("Your chosen country is: %s \n",country);
    char lnString[] = "It is developed";
    int size = sizeof(lnString)/sizeof(lnString[0]);
    puts(size);
    printf("Size is = %d \n",size);
    return 0;
}
*/
