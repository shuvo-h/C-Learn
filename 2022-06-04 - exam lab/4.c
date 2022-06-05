
#include<stdio.h>

struct Fraction{
    int num;     // lob
    int denom;   // hor
};

struct Fraction inverse(struct Fraction a){
    struct Fraction ans;
    ans.num = a.denom;
    ans.denom = a.num;
    return ans;
}

int main(){
    struct Fraction aNumber;
    scanf("%d %d",&aNumber.num,&aNumber.denom);

    struct Fraction res = inverse(aNumber);
     printf("%d/%d",res.num,res.denom);
}
