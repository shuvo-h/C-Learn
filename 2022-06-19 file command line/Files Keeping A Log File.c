#include<stdio.h>

int main(){
    FILE *logfile = fopen("log.txt","a");
    fprintf(logfile,"It is log file\n");

    FILE *inputfile = fopen("input.txt","r");
    if(inputfile == NULL){
        fprintf(logfile,"12:15:00 AM -> input file not found\n");
        return 0;
    }

    int n;
    FILE *outputfile = fopen("output.txt","a");
    fscanf(inputfile,"%d",&n);
    fprintf(outputfile,"5 multiply is = %d\n",n*5);
    printf("Check the output.txt file\n");

    // must close all the files
    fclose(logfile);
    fclose(inputfile);
    fclose(outputfile);
    return 0;
}

