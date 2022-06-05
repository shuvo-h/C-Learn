
#include<stdio.h>
#include <string.h>

 struct Date{
    int year;
    int month;
    int day;
 };

struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};

int main(){
    struct Student s1 = {.name="sufol",.roll=12,.class=5};
    strcpy(s1.name,"new name");
    s1.roll = 15;
    printf("Name: %s\n",s1.name);
    printf("Roll: %d\n",s1.roll);
}

