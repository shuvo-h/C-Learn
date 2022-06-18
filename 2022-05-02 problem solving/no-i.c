
#include <stdio.h>

int main() {
int R;
scanf("%d",&R);
if(R>=0 && R<40)
printf("%d",40-R);
else if(R>=40 && R<70)
printf("%d",70-R);
else if(R>=70 && R<90)
printf("%d",90-R);
else
printf("expert\n");
    return 0;
}
