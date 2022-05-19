#include<stdio.h>
void Truncate(char str[],int n){
    int length = strlen(str);
    if(length < n || 0 > n) return;
    str[n] = '\0';
}
int main(){
    char s[100];
    gets(s);

    int n =0;
    scanf("%d",&n);
    Truncate(s,n);
    printf("%s",s);
}
