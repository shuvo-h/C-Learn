
#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char *name[100];
    int class;
    int roll;
    struct Date dateOfBirth;
};


void printStudent(struct Student st){
    printf("name : %s \n",st.name);
    printf("Class : %d \n",st.class);
    printf("Roll : %d \n",st.roll);
    printf("Birth Date : %d-%d-%d \n",st.dateOfBirth.day,st.dateOfBirth.month,st.dateOfBirth.year);
}

int main(){
    struct Student st1 = {.class=9,.roll=10,.dateOfBirth={2,6,2022}};
    char myname[] = "Mern Developer";
    strcpy(st1.name,myname); // always copy an array, not assign directly
    printStudent(st1);

}

