
#include <stdio.h>
int myPrinter(int N) {
  for(int i=1; i<=N; i++){
    if(i%2 == 0 && i%7 == 0){
        printf("%d",i);
    }
  }
}

int main(){
    myPrinter(60);
}

