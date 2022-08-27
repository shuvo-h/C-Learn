#include<bits/stdc++.h>
#include"MYSTACKTPL.h";
using namespace std;

// time complexity: Best: O(1) to worst: O(n)
bool balancedParenthesis(string s){
    int n = s.size();
    Stack <char> st;
    bool isBalanced = true;
    if(s[0] == ')' || s[0] == '}' || s[0] == ']'){
            return false;
    }
    for(int i=0; i<n; i++){
        // case 1: check opening bracket ->: ({[
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }else if(s[i] == ')'){
            // case 2.1: check opening bracket ->: )
            if(st.Top() == '('){
                st.pop();
               }else{
                isBalanced = false;
                break;
               }
        }else if(s[i] == '}'){
            // case 2.1: check opening bracket ->: )
            if(st.Top() == '{'){
                st.pop();
               }else{
                isBalanced = false;
                break;
               }
        }else if(s[i] == ']'){
            // case 2.1: check opening bracket ->: )
            if(st.Top() == '['){
                st.pop();
               }else{
                isBalanced = false;
                break;
               }
        }

    }

    if(!st.empty()){
        isBalanced = false;
    }
    return isBalanced;
}


int main(){
    string chk;
    cin>>chk;
    bool balanceStatus = balancedParenthesis(chk);
    if(balanceStatus){
            cout<<"YES"<<endl;
    }else {
        cout<<"NO"<<endl;
    }
    return 0;
}
