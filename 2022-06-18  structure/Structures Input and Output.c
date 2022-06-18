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
    int n;
    scanf("%d",&n);
    struct Student height = {.marks = 0};
    for(int i=0; i<n; i++){
        struct Student s;
        scanf("%s %d %d",&s.name,&s.roll,&s.marks);
        printf("%s %d %d\n",s.name,s.roll,s.marks);

        if(s.marks > height.marks){
            height = s;
        }
    }
    printf("Height mark = %d \n",height.marks);
}
