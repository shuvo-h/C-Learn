#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


int main(){
    Stack st;
    int last_day_of_birthday = 10;
    int x = last_day_of_birthday + 5;
    int y = x +3;
    int z = y+x;

    //st.push(1);
    //st.push(2);
    //st.push(3);
    cout<<"Status after push(x+y): "<<endl;
    st.push(x+y);
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after push(y+z): "<<endl;
    st.push(y+z);
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after pop(): "<<endl;
    st.pop();
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after push(y*z): "<<endl;
    st.push(y*z);
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after push(x*y): "<<endl;
    st.push(x*y);
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after pop(): "<<endl;
    st.pop();
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;

    cout<<"Status after pop(): "<<endl;
    st.pop();
    cout<<"\t\tSize = "<<st.size()<<endl;
    if(!st.empty()) cout<<"\t\tTop = "<<st.Top()<<endl<<endl;


    /*
        cout<<"\tStack status = ";
        while(!st.empty()){
            cout<<st.pop()<<" ";
        }
        cout<<endl<<"Size = "<<st.size()<<endl;
        if(!st.empty()) cout<<st.Top()<<endl;
    */

    return 0;
}

