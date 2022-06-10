#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int num;
        scanf("%d",&num);
        int a[num];
        for(int i=0;i<num;i++){
            scanf("%d",&a[i]);
        }
        int count[200001]={0};
        for(int i=0;i<num;i++){
            int value=a[i];
            count[value]++;
        }
        int val=0;
        int counter=0;
        for(int i=0;i<200001;i++){
            if(count[i]>=3){
                counter++;
                val=i;
                break;
            }
        }
   if(counter){
      printf("%d\n",val);
   }
   else{
      printf("-1\n");
   }
    }
   return 0;
}
