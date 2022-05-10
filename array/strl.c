
#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "Hello World ok ok no no";
    char str2[6];
    //strcpy(str2,str);
    strncpy(str2,str,8);
    //str2[]
    str2[7] = '\0';
    //puts(len);
    printf("copyed string = %s\n",str2);
    return 0;
}



/*
int main(){
    char str[100] = "Hello World";

    int len = strlen(str);
    //puts(len);
    printf("Length = %d\n",len);
    return 0;
}

*/

/*
int main(){
    char str[100] = "Hello World";

    int idx = 0;
    int size = 0;
    while(str[idx] != '\0'){
            idx++;
        size++;
        //puts(str[idx]);
    }

    printf("Length = %d",idx);
    return 0;
}

*/
