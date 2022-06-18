/*
The following code finds the product of all elements in an array. Rewrite it using pointers.
int a[n];
int prod=1;
for (int i=0; i<n; i++) {
    prod = prod * a[i];
}
printf("%d", prod);

*/

int main(){
    int n = 4;
    int a[] = {2,3,4,5};
    int prod=1;
    int *ptrProd = &prod;
    for (int i=0; i<n; i++) {
        *ptrProd = *ptrProd * a[i];
    }
    printf("%d", prod);

}
