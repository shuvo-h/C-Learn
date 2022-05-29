#include<stdio.h>
#include<stdbool.h>

struct Date {
    int day;
    int month;
    int year;
};
bool isFirstDayOfYear(struct Date date){
    if(date.day == 1 && date.month == 1){
        return true;
    }else{
        return false;
    }
}

struct Date getFirstDay(int year){
    struct Date ans = {1,1,year};
    return ans;
};

int main(){
    struct Date today;
    printf("Type the date you want to know if it is new year or not: \n");
   scanf("%d %d %d",&today.day,&today.month,&today.year);

    int isFirstdate = isFirstDayOfYear(today);
    if(isFirstdate){
        printf("Hurreh...!! It is the first daye of %d\n",today.year);
    }else{
        printf("Opps...!! It is not the first daye of %d\n",today.year);
    }

    int reqYear;
    printf("Which year's first day Do you want?: \n");
    scanf("%d",&reqYear);

    struct Date ansDate = getFirstDay(reqYear);
    printf("The first date of %d year is %d-%d-%d\n",reqYear,ansDate.day,ansDate.month,ansDate.year);
}

