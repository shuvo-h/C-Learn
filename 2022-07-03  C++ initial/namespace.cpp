
#include<bits/stdc++.h>
using namespace std;

namespace one {
    void fun(){
        cout<<"I am namespace one"<<endl;
    }
    char a[100] = "abcdef";
    void fun2(){
        cout<< "I am name space one point one"<<endl;
    }
    float result = 3.47;
}

namespace two{
    int num1 = 10;
    int num2 = 20;
    void tun(){
        cout<<"I am namespace two"<<endl;
    }
    void tun1(){
        cout<<"i am name space two point two"<<endl;
    }
}
    using namespace one;
    using namespace two;
int main(){
    /*
    one::fun();
    two::tun1();
    one::fun2();
    two::tun();
    */
    fun();
    tun1();
    fun2();
    tun();
    cout<<a<<" "<<num2<<endl;   // a and num2 is comming from namespace one and namespace two
    return 0;
}

