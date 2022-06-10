

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int Marks[n];
    for(int i=0; i<n; i++){
       scanf("%d",&Marks[i]);
    }

    char gender;
    scanf(" %c",&gender);


    int mark_sum = 0;
    for(int i=0; i<n; i++){

        if(gender == 'b' && (i%2 == 0) ){
                // printf("%d b= %d\n",i,Marks[i]);
            mark_sum += Marks[i];
        }else if(gender == 'g' && (i%2 != 0)){
            //printf("%d g= %d\n",i,Marks[i]);
            mark_sum += Marks[i];
        }

    }
    printf("%d",mark_sum);

    return 0;
}

