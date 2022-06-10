#include<stdio.h>
char foolStr[]="heidi",news[1001];
int n,count=0;
int main(){
    scanf("%s",news+1);
    for(int i=1;news[i];++i){
        if(news[i] == foolStr[count])
        ++count;
        if(count==5) return 0*puts("YES");
    }
    puts("NO");
    return 0;
}
