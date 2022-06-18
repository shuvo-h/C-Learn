#include<stdio.h>
#include<stdlib.h>

int main (){
 int num_value;
 scanf("%d",&num_value);

 int friend_list[101];
 int receiver[101];
 int friend_input[101];
 for(int i=0; i<num_value; i++){
     friend_list[i] = i+1;
     scanf("%d",&friend_input[i]);
 }

 for(int i = 0; i <num_value; i++){
    receiver[friend_input[i]-1] = friend_list[i];
 }

for(int i = 0; i <num_value; i++){
    printf("%d ",receiver[i]);
 }

 return 0;
 }
