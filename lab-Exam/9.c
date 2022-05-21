/*
Write a program using pointers to read in an array of integers and Print its elements in reverse order.
*/

void reverseRead(int *n, int *numbers){
    for(int i = *n-1; i >=0; i--){
        printf("%d ",*(numbers +i));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i =0; i<n; i++){
        scanf("%d",&num[i]);
    }
    int *ptrN = &n;
    int *ptrNum = &num;
    reverseRead(ptrN,ptrNum);
}
