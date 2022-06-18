
#include<stdio.h>

struct ArrayHolder{
    int array[100]; // can't declare the size dynamically,
};



struct ArrayHolder makeNarray(int n) {
    struct ArrayHolder ans;
    for(int i=0; i<n; i++){
        ans.array[i] = i + 1;
    }
    return ans;
};


int main(){
    int n=17;
    struct ArrayHolder generatedArray = makeNarray(n);
    for(int i= 0; i<n; i++){
        printf("%d ", generatedArray.array[i]);
    }



}
