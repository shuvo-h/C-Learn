/*

B) Abu and Babu are close friends. Recently they both got admitted into the same university. Now they want to live in the university halls.
They want to live in the same room. There are n rooms in the hall. At the moment the i-th room has pi people living in it and the room can accommodate qi people in total (pi ≤ qi). Your task is to count how many rooms has free place for both Abu and Babu.
*/

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int availableRoom = 0;
    for(int i = 1; i<=N; i++){
        int p,q;
        scanf("%d %d",&p,&q);
        if((q - p) >= 2){
            availableRoom += 1;
        };
    }

    printf("%d",availableRoom);
    return 0;
}
