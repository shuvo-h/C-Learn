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

struct Date inputDate(){
    struct Date dat;
    scanf("%d %d %d",&dat.day,&dat.month,&dat.year);
    return dat;
};

struct Student inputStudent(){
    struct Student st;

    printf("Name: ");
    gets(st.name);
    gets(st.name);

    printf("\nClass: ");
    scanf("%d",&st.class);

    printf("\nRoll: ");
    scanf("%d",&st.roll);

    printf("\nDate of Birth: ");
    st.dateOfBirth = inputDate();

    return st;
}

int main(){
    int n;
    printf("Number of student in class :\n");
    scanf("%d",&n);

    struct Student students[n];
    for(int i=0; i<n; i++){
        printf("Input student %d info \n",i+1);
        students[i] = inputStudent();
    }
    printf("\n*******************\n");
    printf("Showing all Student's info \n");
    for(int i=0; i<n; i++){
        printf("Info of Student's number %d \n",i+1);
        printStudent(students[i]);
    }
}

