#include<stdio.h>
/*
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    int lmc = 1;
    for(int i = 1; i<a && i<b; i++){
       if(a%i == 0 && b%i == 0){
            lmc = i;
       }
    }

    printf("The LMC is %d\n",lmc);

    return 0;
}
*/
/*
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    while(a != 0){
        int remainder = b%a;
        b=a;
        a = remainder;

    }

    printf("The LMC is %d\n",b);

    return 0;
}
*/
/*
int main(){
    //scanf("%d ", &a);
    for(int i=0; i<=10; i++){
        printf("%d\n",i);
        if(i == 7) break;
    }


    return 0;
}
*/
/*
#include<stdlib.h>
int main(){
    srand(time(0));
   int hidden = rand()%99999 + 1;
   printf("hidden value is: %d\n",hidden);

    return 0;
}

*/
/*
#include<stdlib.h>
int main(){
 int sum = 0;
while (sum <= 10) {
sum += 2;
}
printf("%d", sum);

    return 0;
}
*/
/*
#include<stdlib.h>
int main(){
    int sum = 0;
for (int i=0; i<10; i++) {
	if (i%2 == 0 ) continue;
	printf("%d", i);
}

    return 0;
}
*/
/*
#include<stdlib.h>
int main(){
int sum = 20;
do {
	sum += 2;
} while (sum <= 10);
printf("%d", sum);
}
*/
/*
#include<stdlib.h>
int main(){
for (int i=1; i<=10; i++) {
	if (i<5)	continue;
	if (i>5) break;
	printf("%d\n", i);
}
}
*/
#include<stdlib.h>
#include<limits.h>
int main(){
int sum = 0;
while (sum <= 20) {
	printf("%d\n", sum);
if (sum < 10) continue;
	sum+=2;
}

unsigned int x = 0;x--;
printf("%u", x);
}
