#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};
int daysInMonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

struct Date getNextDate(struct Date start,int days){
    struct Date nextDate = start;

    for(int i=0; i<days;i++){
      if(nextDate.day != daysInMonths[nextDate.month-1]){
             nextDate.day++;
        }else if(nextDate.month == 12){
            nextDate.month=1;
            nextDate.day = 1;
            nextDate.year++;
        }else{
            nextDate.month++;
            nextDate.day = 1;
        }
    }

    return nextDate;
};

int main(){
    //struct Date today = {29,5,2022};
    //today = (struct Date){30-5-2022};
    struct Date start;
    printf("Start date:\n");
    scanf("%d %d %d",&start.day,&start.month,&start.year);

    int days;
    printf("How many days:\n");
    scanf("%d",&days);

    struct Date thenextDate = getNextDate(start,days);


    printf("%d-%d-%d",thenextDate.day,thenextDate.month,thenextDate.year);
}
