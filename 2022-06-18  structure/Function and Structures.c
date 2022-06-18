
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
// sebd the structure
struct Student fun(struct Student SS){
    strcpy(SS.name,"Shiuly");
    SS.roll = SS.roll - 5;
    SS.marks = SS.marks - 10;
    return SS;
}
// send the pointer address of structure
void funPointer(struct Student *SS){
    strcpy((*SS).name,"Lasari");
    SS->roll = (*SS).roll + 2;  // -> means pointer deReference and go to that roll property
    (*SS).marks = (*SS).marks + 10;
}

int main(){
    struct Student S1 = {"Ripon", 21, 35};
    struct Student newS =  fun(S1);
    print_struct(newS);
    funPointer(&S1);
    print_struct(S1);
}
