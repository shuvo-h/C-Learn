/*
The window of Takahashi's room has a width of AA. There are two curtains hung over the window, each of which has a horizontal length of BB. (Vertically, the curtains are long enough to cover the whole window.)

We will close the window so as to minimize the total horizontal length of the uncovered part of the window. Find the total horizontal length of the uncovered parts of the window then.
*/
/*
#include<stdio.h>
int main(){
int A, B;
scanf("%d %d",&A,&B);
int R = A - 2 * B;
if(R > 0){
    printf("%d",R);
}else{
printf("%d",0);
}
}
*/
/*
You are given an integer NN. If NN is between -2^{31}−2
31
  and 2^{31}-12
31
 −1 (inclusive), print Yes; otherwise, print No.
*/
#include<stdio.h>
#include<limits.h>
int main(){
int N;
scanf("%d",&N);
if( (INT_MAX > N)){
    printf("Yes");
}else{
printf("No");
}
}
