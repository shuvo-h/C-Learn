
#include<stdio.h>
#include<stdbool.h>


int main(){
    void dynamic(int s, ...) {

    printf("%d ", s);
}

int main() {

    dynamic(2, 4, 6, 8);
}



    /*
    char ar[]={'a','b','c','d','e','\0','g','h','i','j'};

    printf("%s",ar);
    */
    /*
    bool F = false;
    bool T = true;
    if(((((((F&&T)||F)||T)&&T||F)&&T)||F)){
        printf("Access");
    }else{
        printf("Deney");
    }
    */
}

//((((((F&&T)||F)||T)&&T||F)&&T)||F)
