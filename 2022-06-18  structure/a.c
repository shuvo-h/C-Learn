#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};
struct Parent {
    char father[100];
    char mother[100];
};
int main(){
    struct Student s1 = {.name = "Rakib", .marks = 21, .roll = 97};
    printf("name -> %s, Roll -> %d, Marks -> %d \n",s1.name,s1.roll,s1.marks);

    struct Parent p1;
    strcpy(p1.father,"Daniyel");
    strcpy(p1.mother,"Leichy");
    printf("%s and %s \n", p1.father,p1.mother);
}
