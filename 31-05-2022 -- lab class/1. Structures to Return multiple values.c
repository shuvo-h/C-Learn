
#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct{
    char* name;
    int class;
    int roll;
    struct Date dob;
};
// returning multiple value (3 int value is being returned through the struct)
struct Date getFirstDay(int year){
    struct Date ans = {1,1,year};
    return ans;
};

struct Result {
    int vagfol;
    int vagshesh;
};

void divide(int x, int y, int *vagfol, int *vagshesh){
    *vagfol = x/y;
    *vagshesh = x%y;
}
struct Result divideWithStruct(int x, int y){
    struct Result ans;
    ans.vagfol = x/y;
    ans.vagshesh = x%y;
    return ans;
}
struct Result divideWithStructDirectly(int x, int y){
    return (struct Result){x/y, x%y};
}

int main(){
    int a=10, b=3;
    int vagfol, vagshesh;
    divide(a,b,&vagfol,&vagshesh);
    printf("%d %d\n",vagfol,vagshesh);

    // with struct, return multiple value
    struct Result answer = divideWithStruct(a,b);
    printf("%d %d\n",answer.vagfol,answer.vagshesh);

    // with struct, return multiple value directly assign and return
    struct Result answerDirect = divideWithStructDirectly(a,b);
    printf("%d %d\n",answerDirect.vagfol,answerDirect.vagshesh);
}
