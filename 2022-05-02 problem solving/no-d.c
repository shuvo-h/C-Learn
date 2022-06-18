/*

Bjorn Ironside likes to play chess, and so does his enemy King Harald.

Once they have played n games in a row. For each game it's known who was the winner — Bjorn Ironside or King Harald. None of the games ended with a tie.

Now Bjorn Ironside wonders, who won more games, he or King Harald? Help him determine this.

The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the number of games played.

The second line contains a string s, consisting of n uppercase English letters 'A' and 'D' — the outcome of each of the games. The i-th character of the string is equal to 'A' if the Bjorn Ironside won the i-th game and 'D' if King Harald won the i-th game.

If Bjorn Ironside won more games than King Harald, print "Anton" (without quotes) in the only line of the output.

If King Harald won more games than Bjorn Ironside, print "Danik" (without quotes) in the only line of the output.

If Bjorn Ironside and King Harald won the same number of games, print "Friendship" (without quotes).

*/
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    char result[N];
    int B = 0;
    int K = 0;
    for(int i=0; i<=sizeof(result); i++){
        scanf("%c",&result[i]);
    }
    for(int i=1; i<=sizeof(result); i++){
        char text = result[i];

        if(text == 65){
            B += 1;
        }else if(result[i] == 68){
            K += 1;
        }

    }

    if(B == K){
        printf("Friendship");
    }else if(B > K){
        printf("Anton");
    }else{
        printf("Danik");
    }


    return 0;
}
