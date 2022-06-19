#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile = fopen("input.txt","r");  //r w a
    if(inputFile == NULL){
        printf("No Input File Found!\n");
    }
    FILE *outputFile;
    outputFile = fopen("output.txt","w");

    FILE *allOutput;
    allOutput = fopen("alloutput.txt","a");

    int sum = 0;
    while(1){
        char ch = fgetc(inputFile);
        printf("%c\n",ch);
        sum += ch;
        fputc(ch,outputFile);  // write the character to that file
        fputc(ch,allOutput);
        if(ch == EOF){  // EOF = End of File
            break;
        }
    }
}
