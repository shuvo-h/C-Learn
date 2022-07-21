
#include<bits/stdc++.h>
using namespace std;

class Example{
public:
    int add(int x, int y){
        cout<<"First one"<<endl;
        return x+y;
    };
    double add(double x, double y){
        cout<<"Second one"<<endl;
        return x+y;
    }
    void add(char a){
        cout<<"Third one"<<endl;
        cout<<"Hi, I am "<<a<<endl;
    }
};


int main(){
    Example ex;
    cout<<ex.add(1.24,2.4)<<endl;
    ex.add('s');
    return 0;
}

