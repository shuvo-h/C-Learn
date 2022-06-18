// write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    s1.cgpa = 3.47;
    s1.roll = 10;
    strcpy(s1.name,"bappy");

    struct student s2;
    s2.cgpa = 3.57;
    s2.roll = 8;
    strcpy(s2.name,"muniua");

    printf("Name of first student = %s\n",s1.name);
    printf("Roll of first student = %d\n",s1.roll);
    printf("CGPA of first student = %0.2lf\n",s1.cgpa);
    printf("Name of second student = %s\n",s2.name);
    printf("Roll of second student = %d\n",s2.roll);
    printf("CGPA of second student = %0.2lf\n",s2.cgpa);

}

