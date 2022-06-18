/*
Takahashi and Aoki decided to train themselves by running.
Takahashi repeats the following schedule: "Run for AA seconds at BB meters per second and then rest for CC seconds."
Aoki repeats the following schedule: "Run for DD seconds at EE meters per second and then rest for FF seconds."
When XX seconds have passed since they simultaneously started running, which of Takahashi and Aoki is ahead?

Input is given from Standard Input in the following format:

A B C D E F X

When XX seconds have passed since they simultaneously started, if Takahashi goes ahead of Aoki, print Takahashi; if Aoki goes ahead of Takahashi, print Aoki; if they have advanced the same distance, print Draw.

*/

#include<stdio.h>

int main(){
    int A,B,C,D,E,F,X;
    scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&X);
    int tRound = (int)floor(X/(A+C));
    int aRound = (int)floor(X/(D+F));

    int tRemaining = X%A;
    int aRemaining = X%D;

    int takResult = 0;
    int aokiResult = 0;

    int takTimeRem = X;
    int aokiTimeRem = X;

    for(int i=0; takTimeRem > 0;i++){
           if(takTimeRem < A && takTimeRem > 0){
                takResult = takResult + (takTimeRem * B);
                takTimeRem = takTimeRem - (takTimeRem);
           }else if(takTimeRem >= A && takTimeRem > 0){
                takResult = takResult + (A * B);
                takTimeRem = takTimeRem - (A + C);
           }
    }

    for(int i=0; aokiTimeRem > 0;i++){
           if(aokiTimeRem < D && aokiTimeRem > 0){
                aokiResult = aokiResult + (aokiTimeRem * E);
                aokiTimeRem = aokiTimeRem - (aokiTimeRem);
           }else if(aokiTimeRem >= D && aokiTimeRem > 0){
                aokiResult = aokiResult + (D * E);
                aokiTimeRem = aokiTimeRem - (D + F);
           }
    }

    if(takResult == aokiResult){
        printf("Draw");
    }else if(takResult > aokiResult){
        printf("Takahashi");
    }else{
        printf("Aoki");
    }


    return 0;
}

/*
int main(){
    int A,B,C,D,E,F,X;
    scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&X);
    double tRun = 0;
    double aRun = 0;
    int tRound = (int)floor(X/A);
    int aRound = (int)floor(X/D);
    for(int i = 1; i<=tRound; i++){
        double takResult = (A*B*X)/(A+C);
        tRun += takResult;
    }
    for(int i = 1; i<=aRound; i++){
        double aokiResult = (D*E*X)/(D+F);
        aRun += aokiResult;
    }
    //extra seconds
    int tEx = X%A;
    tRun + (A*B*tEx)/(A);
    int aEx = X%D;
    aRun = (D*E*aEx)/(D);

    if(tRun == aRun){
        printf("Draw");
    }else if(tRun > aRun){
        printf("Takahashi");
    }else{
        printf("Aoki");
    }
    return 0;
}
*/
