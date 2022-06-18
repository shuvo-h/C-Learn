
#include<stdio.h>
#include<string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void print_struct(struct Student p){
    printf("in main fn = %s %d %d\n",p.name,p.roll,p.marks);
}

void fun(struct Student *S){
    S[0].roll = 11;
}

int main(){
    struct Student a[5];
     for(int i=0; i<3; i++){
        scanf("%s %d %d", &a[i].name, &a[i].roll, &a[i].marks);
     }
     printf("\n");
     for(int i=0; i<3; i++){
        print_struct(a[i]);
     }
     fun(a);
     printf("\n");
     for(int i=0; i<3; i++){
        print_struct(a[i]);
     }
}
