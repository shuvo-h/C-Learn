
#include<bits/stdc++.h>
using namespace std;

class Example{
private:
    int x;
    int pass;
    int z;
public:
    Example(int p){
        pass = p;
    }
    void setter(int a, int p){
        if(p == pass){
            x = a;
        }else{
            cout<<"password Doesn't match!" <<endl;
        }
    }
    int getter(int p){
        if(p == pass){
            return x;
        }else{
            cout<<"password Doesn't match!" <<endl;
            return 0;
        }
    }
};

int main(){
    Example a(2344);
    a.setter(150,2344);
    int cd = a.getter(244);
    cout<<cd<<" "<<endl;

    return 0;
}
