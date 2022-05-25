// write a program to store the data of 3 students
#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student ece[100];
    struct student coe[100];
    struct student it[100];

    strcpy(ece[0].name,"stifen");
    ece[0].roll = 14;
    ece[0].cgpa = 2.45;

    printf("name = %s",ece[0].name);
    // initializing structure
    ece[1] = {"barking",12,3.65};
    printf("ece[1] name = %s\n",ece[1].name);
    printf("ece[1] name = %d\n",ece[1].roll);
    printf("ece[1] name = %0.2lf\n",ece[1].cgpa);
}

