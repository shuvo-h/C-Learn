#include<bits/stdc++.h>
#include"MYSTACKTPL.h"
using namespace std;

int globalID = 100;
class Person{
    string name;
    int id;
    float salary;
public:
    Person(){
        name = "";
        id: -1;
        salary = -1.0;
    }
    void setName(string name){
        this->name = name;
    }
    void setSalary(float salary){
        this->salary = salary;
    }
    Person(string name, float salary){
        setName(name);
        id = globalID;
        setSalary(salary);
        globalID++;
    }
    int getID(){
        return id;
    }
    string getName(){
        return name;
    }
    float getSalary(){
        return salary;
    }
    void print(){
        cout<<id<<" | "<<name<<" : "<<salary<<endl;
    }
};

int main(){
    // class data type in template with our custom header file *****************************
    Stack <Person>st;
    Person a("Sahabir Patel",4265.3241);
    Person b("Bitali Patel",3305.3241);
    Person c("Jhimrisa Patel",1534.3241);

    st.push(a);
    st.push(b);
    st.push(c);

    while(!st.empty()){
        Person printObj;
        printObj = st.pop();
        printObj.print();
    }

    Person topPerson;
    topPerson = st.Top();
    topPerson.print();

    cout<<st.size()<<endl;


    /*
    // pair data type *******************************
    Stack <pair<int,char>>st;
    st.push(make_pair(1,'a'));
    st.push(make_pair(2,'b'));
    st.push(make_pair(3,'c'));

    cout<<st.size()<<endl;
    //if(!st.empty()) cout<<st.Top()<<endl<<endl;

    while(!st.empty()){
        pair<int,char> check;
        check = st.pop();
        cout<<check.first<<":"<<check.second<<endl;
    }
    cout<<endl<<st.size()<<endl;

    if(!st.empty()){
        pair<int,char> check;
        check = st.Top();
        cout<<check.first<<":"<<check.second<<endl;
    }

    */



    /*
    // String as template  ******************************
    Stack <string>st;
    st.push("ABC Def");
    st.push("IJK Lmn");
    st.push("OPQ rst");

    cout<<st.size()<<endl;
    if(!st.empty()) cout<<st.Top()<<endl<<endl;
    while(!st.empty()){
        cout<<st.pop()<<endl;
    }
    cout<<endl<<st.size()<<endl;
    if(!st.empty()) cout<<st.Top()<<endl;
    */

    return 0;
}
