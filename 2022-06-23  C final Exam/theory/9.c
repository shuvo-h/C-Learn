#include<stdio.h>

struct Student {
    int roll;
    int class;
    int marks;
};
int main(){
    // variable of student structure
    struct Student newStudent = {.roll = 5, .class = 6, .marks = 89};
    // array of student structure
    int N;
    printf("Enter the number of students = ");
    scanf("%d",&N);
    struct Student allS[N];
    int sum = 0;
    for(int i=0; i<N; i++){
        printf("\nEnter Roll, Class and Marks of student Number %d = ", i+1);
        scanf("%d %d %d",&allS[i].roll,&allS[i].class,&allS[i].marks);
        sum += allS[i].marks;
    }

    printf("\nThe sum of marks of all students = %d \n", sum);

    return 0;
}

