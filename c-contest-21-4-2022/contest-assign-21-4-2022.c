#include<stdio.h>

int main(){
    int number,i;
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        printf("%d Abracadabra\n",i);
    }
        return 0;
}

/*
int main() {
    char character;
    scanf("%c", &character);
     if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
       character=='A' || character=='E' || character=='I' || character=='O' || character=='U')
        printf("vowel");
    else
        printf("consonant");
    return 0;
}
*/

/*
// c)
int main(){
    int n;
    scanf("%d",&n);
    int days = 0;
    for(int i=1; i<=n; i++){
        int a,b,c,d,e,f,g,h,i;
        scanf("%d %d %d %d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f,&g,&h,&i);

        if(a<0){
            days += 1;
        }else if(b<0){
            days += 1;
        }else if(c<0){
            days += 1;
        }else if(d<0){
            days += 1;
        }
    };
    printf("total %d",days);
    return 0;
}
*/
/*
int main(){
    int x;
    scanf("%d",&x);
    if(x < 1200){
        printf("ABC");
    }else{
        printf("ARC");
    }

    return 0;
}
*/
/*
int main(){
    int A, B, C;
    scanf("%d %d %d",&A, &B, &C);
    if(A==(5||7) && B==(5||7) && C==(5||7)){
            printf("%d %d %d",A,B,C);
        int sum = A + B + C;
        if(sum==17){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        printf("NO");
    }

    return 0;
}
*/




