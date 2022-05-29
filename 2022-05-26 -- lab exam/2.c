
#include<stdio.h>

int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}


int main(){
    int num[] = {1, 2,1, 2, 1};
    int res = f(5,num);
    printf("%d\n",res);
    return 0;
}

