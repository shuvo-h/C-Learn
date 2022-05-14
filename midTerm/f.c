
#include<stdio.h>
int main()
{
	char number,count=0;
	number=getchar();
	while(number!='\n')
	{
		if(number=='4'||number=='7')
		{
			count++;
		}
		number=getchar();
	}
	if(count==7||count==4)
	{
		printf("YES");
	}else {
        printf("NO");
	}
	return 0;
}


/*
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int counter = 0;
    while(n != '\n'){
        if(n == 4 || n == 7){
            counter++;
        }
        scanf("%d",&n);
    }
    if(counter==4||counter==47||counter==74||counter==44||counter==7 ){
         printf("YES");
    }else{
         printf("No");
    }
    return 0;
}
*/

/*
#include<stdio.h>

int main(){
    long long n;
    scanf("%I64d",&n);
    int counter = 0;
    while(n > 1){
        int remainder = n%10;
        if(remainder == 4 || remainder == 7){
            counter++;
        }
        n=n/10;
    }
    if(counter==4||counter==47||counter==74||counter==44||counter==7 ){
         printf("YES");
    }else{
         printf("No");
    }
    return 0;
}

*/
