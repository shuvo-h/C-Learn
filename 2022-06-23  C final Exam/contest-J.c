#include<stdio.h>
struct Name{
    char fname[100];
    char lname[100];
};
int main()  {
    int n;
    scanf("%d",&n);
    struct Name people[n];
    for(int i=0; i<n; i++){
        scanf("%s %s",&people[i].fname,&people[i].lname);
    }

    struct Name cpyPeople[n];
    for(int i=0; i<n; i++){
            strcpy(cpyPeople[i].fname,people[i].fname);
    strcpy(cpyPeople[i].lname,people[i].lname);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int fValue = strcmp(people[i].fname,cpyPeople[j].fname);
            int lValue = strcmp(people[i].lname,cpyPeople[j].lname);
             if(fValue == 0 && lValue == 0){
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");

    return 0;
}

