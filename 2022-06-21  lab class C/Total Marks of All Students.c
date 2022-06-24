#include<stdio.h>

struct Student{
    char name[100];
    int id;
    int marks;
     int total;
};

int main(){
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0; i<n; i++){
        scanf("%s %d %d",&students[i].name,&students[i].id,&students[i].marks);
        int sum = 0;
        for(int j=0; j<i; j++){
            if(students[i].id == students[j].id){
                sum += students[j].marks;
            }
        }
        int total_sum = sum + students[i].marks;
        students[i].total = total_sum;
        printf("Sum of Marks = %d\n",sum);
    }
    for(int i=0; i<n; i++){
        printf("%s %d %d %d\n",students[i].name,students[i].id,students[i].marks,students[i].total);
    }
    return 0;
}
