
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","r");
    if(fptr == NULL){
        printf("File does not exit.\n");
    }else{
        // work on file
        int ch;
        fscanf(fptr,"%d",&ch);
        printf(fptr,"%d\n",ch);
        fscanf(fptr,"%d",&ch);
        printf(fptr,"%d\n",ch);
        fscanf(fptr,"%c",&ch);
        printf(fptr,"%c\n",ch);
        fscanf(fptr,"%c",&ch);
        printf(fptr,"%c\n",ch);
        // always close the file
        fclose(fptr);
    }
    fclose(fptr);
    return 0;
}
