
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char word[n];
    scanf("%s",&word);
    //puts(word);
    int zCount = 0, oCount=0;
    for(int i=0; i<n; i++){
            //printf("%d = %c\n",i,word[i]);
        if(word[i] == 'z'){
            zCount++;
          //  printf("%d ", 0);
        }else if(word[i] == 'n'){
            oCount++;
           // printf("%d ", 1);
        }
    }
    for(int i = 0; oCount > 0; i++){
            //printf("oCount = %d\n",oCount);
            if(oCount>0){
                printf("%d ", 1);
                oCount--;
            }
    }
    for(int i = 0; zCount > 0; i++){
            //printf("oCount = %d\n",oCount);
            if(zCount>0){
                printf("%d ", 0);
                zCount--;
            }
    }
    return 0;
}
