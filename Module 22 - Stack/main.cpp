#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;


int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.size()<<endl;
    if(!st.empty()) cout<<st.Top()<<endl;
    while(!st.empty()){
        cout<<st.pop()<<endl;
    }
    cout<<endl<<st.size()<<endl;
    if(!st.empty()) cout<<st.Top()<<endl;


    return 0;
}
