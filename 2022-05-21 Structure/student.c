#include<stdio.h>
#include<string.h>
// user defined data type
    struct student{
        char name[100];
        int roll;
        float cgpa;
    };
int main(){
    struct student s1;
    //s1.name = 'bappy';  //can not write directly string, we can copy that
    strcpy(s1.name,"bappy");
    s1.roll = 10;
    s1.cgpa = 3.25;

    printf("student name = %s\n",s1.name);
    printf("student roll = %d\n",s1.roll);
    printf("student cgpa = %0.2lf\n",s1.cgpa);
}
