#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    //scanf("%s %s",a,b);
    gets(a);
    gets(b);
    /*
    int cmpResult = strcmp(a,b);
    printf("%d",cmpResult);
    */

    int idx = 0;
    while(a[idx] == b[idx] && a[idx] != '\0' && b[idx] != '\0'){
        idx++;
    }

    if(a[idx] == '\0' && b[idx] == '\0'){
        printf("Equal");
    }else if(a[idx] == '\0' && b[idx] != '\0'){
        printf("A < B");
    }else if(a[idx] != '\0' && b[idx] == '\0'){
        printf("A > B");
    }else if(a[idx] < b[idx] ){
        printf("A < B");
    }else{
        printf("A > B");
    }

    //strcat(str,str2);
    //strcmp(str,str2);
   // str[7] = '\0';
    //printf("copyed string = %s\n",str);
    return 0;
}

/*
int main(){
    char str[30] = "Hello";
    char str2[50] = "Country";

    //strcat(str,str2);
    strncat(str,str2,2);
    str[7] = '\0';
    printf("copyed string = %s\n",str);
    return 0;
}
*/
