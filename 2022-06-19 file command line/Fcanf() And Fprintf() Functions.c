
#include<stdio.h>

int main(){
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input1.txt","r");
    outputFile = fopen("output.txt","a");
    if(inputFile == NULL){
        fprintf(outputFile,"File not found! \n");
        printf("No input file!");
        return;
    }


    int n;
    fscanf(inputFile,"%d",&n);  // receive input from a file
     printf("n -> %d \n",n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        int a;
        fscanf(inputFile,"%d",&a);
        sum += a;
    }
    fprintf(outputFile,"sum -> %d \n",sum);
    printf("Sum -> %d \n",sum);
}
