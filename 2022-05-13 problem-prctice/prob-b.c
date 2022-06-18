#include<stdio.h>
#include<stdlib.h>

int main (){
 int n;
 scanf("%d",&n);
 int num_array[n];
 for(int i = 0; i<n; i++){
    scanf("%d",&num_array[i]);
 }
 int fr[101]={0};
 // printf("%d => %d\n",0,fr[0]);
  for(int i = 0; i<101; i++){

      fr[num_array[i]]++;
       //printf("%d => %d\n",i,num_array[i]);
 }

 int res_index = 0;
for(int i = 0; i<101; i++){
      printf("%d => %d\n",i,fr[i]);
      if(fr[i] == 1){
         int value =  fr[i];
         //printf("value = %d\n",value);
         for(int j = 0; j<n; j++){
                //printf("value = %d\n",value);
            if(num_array[j] == value){
                res_index = j+1;
            }
         }
      }
 }
 printf("%d",res_index);
 return 0;
 }

