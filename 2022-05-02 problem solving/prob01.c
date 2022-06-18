/*
A) There are NN people numbered 1, 2, \ldots, N1,2,…,N. We have KK gifts.
Staring with Person AA , gifts are distributed one by one sequentially. In other words, people receive gifts in the following order: A, A+1, A+2, \ldots, N, 1, 2, \ldotsA,A+1,A+2,…,N,1,2,…. Who will receive the last gift?
Formally, after Person x(1 \leq x < N)x(1≤x<N) gets a gift, Person x+1x+1 will get a gift. After Person NN gets a gift, Person 11 gets a gift. This goes on until all K a gift have been given.

*/

#include<stdio.h>

int main(){
    int N, K, A;
    scanf("%d %d %d", &N, &K, &A);
    int last_receiver = A;
    for(int i = K; i > 0; i--){
            // printf("gift = %d last person = %d\n",K,last_receiver);
        if(K > 1){
            if(last_receiver == N){
                last_receiver = 0;
            }
            K -= 1;
            last_receiver += 1;
        }
    }

    printf("%d",last_receiver);
    return 0;
}
