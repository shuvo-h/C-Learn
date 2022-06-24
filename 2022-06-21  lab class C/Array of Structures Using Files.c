
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct Student{
    char name[100];
    int id;
    int marks;
};

struct Unique_student{
    char name[100];
    int id;
    int total;
};

int main(){
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    if(inputFile == NULL){
        printf("No input founded!");
        return 0;
    }
    int n;
    fscanf(inputFile,"%d",&n);
    struct Student students[n];
    struct Unique_student unique_student[n];
    int k = 0;
    for(int i=0; i<n; i++){
        fscanf(inputFile,"%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        bool found = false;
        for(int j = 0; j<k; j++){
            if(unique_student[j].id == students[i].id){
                unique_student[j].total  +=  students[i].marks;
                found = true;
            }
        }
        if(!found){
            strcpy(unique_student[k].name,students[i].name);
            unique_student[k].id  = students[i].id;
            unique_student[k].total  = students[i].marks;
            k++;
        }
    }

    for(int i=0; i<k; i++){
        fprintf(outputFile,"%s %d %d \n",unique_student[i].name,unique_student[i].id,unique_student[i].total);
    }
   // printf("%s %d %d \n %s %d %d \n",rakib.name, rakib.id,rakib.total,sakib.name,sakib.id,sakib.total);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}


