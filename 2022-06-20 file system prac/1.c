/*
Make an array of struct Student given below and tell which student got the highest marks and which student got the lowest marks?

struct Student
{
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};
*/

#include<stdio.h>
#include<string.h>
struct student {
    char name[100];
    int marks;
    int roll;
    char section;
    int whichClass;
};
void printStruct(struct student newStudent){
    printf("%s %d %d %c %d",newStudent.name,newStudent.marks,newStudent.roll,newStudent.section,newStudent.whichClass);
}
int main(){
    struct student allStudents[3];
    for(int i=0; i<3; i++){
        scanf("%s %d %d %c %d",&allStudents[i].name,&allStudents[i].marks,&allStudents[i].roll,&allStudents[i].section,&allStudents[i].whichClass);
    }
    printStruct(allStudents[0]);
}
