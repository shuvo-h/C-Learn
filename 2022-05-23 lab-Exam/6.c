/*
void makeNArray(int n, int squares[]) populates squares with first n square numbers. For example, makeNarray(4, squares) will populate squares with 1, 4, 9, 16. Implement the function.
*/

void makeNArray(int n, int squares[]){
    for(int i = 0; i<n; i++){
        squares[i] = (i+1) * (i+1);
    }
}

int main(){
    int n = 4;
    int nums[n];
    makeNArray(n,nums);
    for(int i = 0; i<n; i++){
        printf("%d => %d\n",i,nums[i]);
    }
}
