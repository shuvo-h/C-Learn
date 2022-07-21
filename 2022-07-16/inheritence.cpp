

#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    int x;
private:
    int y;
protected:
    int z;
public:
    Parent(int a,int b, int c){
        x=a;
        y=b;
        z=c;
    }
};

class Child: public Parent{
public:
    int xx;
    Child(int aa):Parent(1,2,3){
        xx=aa;
    }
    void tellMe(){
        cout<<"Protected value: "<<z<<endl;
    }
};


int main(){
    Parent pt(10,20,30);
    Child ch(52);
   cout<<pt.x<<" "<<ch.x<<" "<<ch.xx<<endl;
    ch.tellMe();
    return 0;
}
