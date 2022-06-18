#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char colors[100];

    scanf("%s",&colors);;
    char choice[100];
    int intCount = 0;
    for(int i=0; i<n; i++){

        if(i == 0){
            choice[intCount] = colors[i];
            intCount++;
        }else{
            if(choice[intCount-1] != colors[i]){
                choice[intCount] = colors[i];
                intCount++;
            }
        }
    }

    int lenRemove =  strlen(colors) - intCount;
    printf("%d\n",lenRemove);

}
