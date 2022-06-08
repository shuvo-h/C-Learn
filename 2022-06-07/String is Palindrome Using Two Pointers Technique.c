
#include<stdio.h>
#include<string.h>
// Palindrome = reverse of a string is same as original string, eg. madam == strrev(madam)

int main(){
    char a[100];
    scanf("%s",&a);
    for(int i=0,j=strlen(a)-1; i<j; i++,j--){
        if(a[i] != a[j]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
