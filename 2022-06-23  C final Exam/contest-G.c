#include<stdio.h>
#include<string.h>

int main(){
	int L, R;
	char S[100000];
	scanf("%d %d",&L,&R);
	scanf("%s",&S);
	for(int i=0; i<L-1; i++){
        printf("%c",S[i]);
	}
	for(int i=R-1;i>=L-1;i--) {
        printf("%c",S[i]);
	}
	for(int i=R;i<strlen(S);i++) {
        printf("%c",S[i]);
	}
	return 0;
}


