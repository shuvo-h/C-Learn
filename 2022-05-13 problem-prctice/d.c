#include<stdio.h>
#include<string.h>
int main(){
    char colors[10^3];
    scanf("%s",&colors);;
    for(int i=0; i<strlen(colors); i++){
        if(i == 0){
            if(colors[i] > 'a'){
                colors[i] = colors[i] - 32;
            }
        }
    }
    puts(colors);
}
