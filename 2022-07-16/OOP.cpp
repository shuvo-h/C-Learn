#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    char name[100];
    int roll;

};

int main(){
    Student rahim;
    strcpy(rahim.name,"It is rahim");
    rahim.roll = 56;
    cout<<rahim.name<<" "<<rahim.roll<<endl;
    return 0;
}
