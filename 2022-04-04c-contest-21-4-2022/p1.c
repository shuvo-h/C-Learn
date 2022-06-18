#include<stdio.h>
int main(){
    int xy;
    scanf("%d",&xy);
    if(xy < 1200){
        printf("ABC");
    }else{
        printf("ARC");
    }
    return 0;
}


/*
#include<stdio.h>
int main()
{
    int num,b,c;
    scanf("%d %d %d",&num,&b,&c);

    if(num+b<num+c && num+b<b+c){
        printf("%d",num+b);
    }else if(num+c<num+b && num+c<b+c){
        printf("%d",num+c);
    }else{
        printf("%d",b+c);
    }
    return 0;
}

*/


/*
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d",&num1,&num2);
    num3=num1+num2;
    if(num3>=10)
    {
        printf("error\n");
    }
    else
    {
        printf("%d",num3);
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num3>=num1 && num3<=num2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
*/

/*
#include<stdio.h>
 main()
{
    int x, y, z;
    scanf("%d %d %d",&x, &y, &z);
    if((x==5||x==7)&&(y==5||y==7)&&(z==5||z==7))
    {
        int sum = x + y + z;
        if(sum==17)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int i,Number,X,Y;
    scanf("%d %d %d",&X,&Y,&Number);
    for(i=1; i<=Number; i++)
    {
        if(i%X==0 && i%Y==0)
        {
            printf("FizzBuzz\n");
        }
        else if(i%X==0)
        {
            printf("Fizz\n");
        }
        else if(i%Y==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/
/*
int main()
{
    int number,i;
    float X,Y;
    scanf("%d",&number);
    float sum=0;
    for(i=1; i<=number; i++)
    {
        scanf("%f %f",&X,&Y);
        sum=sum+(X*Y);
    }
    printf("%.3f",sum);

    return 0;
}
*/

/*
main()
{
    int number,i,sum=0;
    scanf("%d",&number);
    int store[101];
    for(i=1; i<=number; i++)
    {
        scanf("%d",&store[i]);
    }
    for(i=1; i<=number; i++)
    {
        // printf("%d",array[i]);
        if(store[i]<0)
            sum=sum+1;
    }
    printf("%d",sum);

    return 0;
}
*/
