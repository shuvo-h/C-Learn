#include<bits/stdc++.h>
#include"MYSTACKTPL.h"
using namespace std;

/*
    // convert infix to prefix // if we get an prefix notation ()-(), two different curly brackets (7+5)-(4*1)
    step 1: reverse the input (7+(4*5))-(2+0)  => )0+2(-))5*4(+7(
    step 2:     case 1: 0 to 9 => direct print
                case 2: ')' it is openiong bracket after reversing, so push to stack st.push()
                case 3: '(' it is the ending bracket, st.pop() until we get ')' a new starting bracket//
                case 4: '^,/,*,+,-', if these 5 operator come, the it will check what the stack top value is?
                        sub-case 1: top value may less precedence [here precedence means higher priority: )->^->+->-->*->/->(], if top value less precedence, then just push to stack
                        sub-case 2: top value may not less precedence eg. top = '/' but upcomming check is '-', here '/' is highrt priority than '-'. so pop or remove from stack untill we get a less priority. remove the '/' and so on until we get less priority or equal than '-'
                                    ek kothay: kom priority ba soman soman priority er top er upor boste pare, kintu besi priority er mathar upor boste pare na. tokhon besi priority er gulo stack thake pop ba output a print kore dao until check er soman ba kom priority er kawkw pai

    stack arrangement of: (7+(4+5))-(2+0)  => )0+2(-))5*4(+7(

    in final: reverse the output again: "output: 0 2 + 5 4 * 7 + -"  "reverse_output: - + 7 * 4 5 + 2 0"
    check16 = (: got to case 3, so pop from stack and continue this pop process until we get ')' in stack, here afer one '+' we can get ')' and poping it there is no another ')' so pop the '-' also,    "output: 0 2 + 5 4 * 7 + -" "stack: "
    check14 = 7: got to case 1, so print the 7    "output: 0 2 + 5 4 * 7" "stack: - ) +"
    check13 = +: got to case 4, so check precendency with stack top, Since stack is ')' and less precedence then '+', so push the '-' into stack,   "output: 0 2 + 5 4 *" "stack: - ) +"
    check12 = (: got to case 3, so pop from stack and continue this pop process until we get ')' in stack, here afer one '*' we get the ')', sothat print only '*' and pop the fist ')',   "output: 0 2 + 5 4 *" "stack: - )"
    check11 = 4: got to case 1, so print the 4   "output: 0 2 + 5 4" "stack: - ) ) *"
    check10 = *: got to case 4, so check precendency with stack top, and ')' is less precedenc than '*', (so sub-case 1) and push '*' to stack,   "output: 0 2 + 5" "stack: - ) ) *"
    check09 = 5: got to case 1, so print the 5  "output: 0 2 + 5" "stack: - ) )"
    check08 = ): got to case 2, so push to stack,   "output: 0 2 +" "stack: - ) )"
    check07 = ): got to case 2, so push to stack,   "output: 0 2 +" "stack: - )"
    check06 = -: got to case 4, so check precendency with stack top, Since stack is empty, just push the '-' into stack,  "output: 0 2 +" "stack: -"
    check05 = (: got to case 3, so pop from stack and continue this pop process until we get ')' in stack,  "output: 0 2 +" "stack: "  // no need to print '(' but '+'
    check04 = 2: got to case 1, so print the 2  "output: 0 2" "stack: ) +"
    check03 = +: got to case 4, so check precendency with stack top, and '(' is less precedenc than '+', (so sub-case 1) and push '+' to stack,   "output: 0" "stack: ) +"
    check02 = 0: got to case 1, so print the 0, "output: 0" "stack: )"
    check01 = ): got to case 2, so push to stack
    stack:
)
*/

/*
    // convert infix to postfix
    2nd example::
    (4*(3+5))-(2+0)
    step 0: No need to reverse
    step 1: No need to change or reverse '(' and ')'. Keep them as they are in the question
    step 2:

    example: (4*(3+5))-(2+0)  -> 435+*20+-
    check15 = ): got to case 3, so check top precedence and start poping until 2nd '(', "output: 4 3 5 + * 2 0 + -" "stack: "
    check14 = 0: got to case 1, so print it to output, "output: 4 3 5 + * 2 0" "stack: - ( +"
    check13 = +: got to case 4, so check precendency with stack top and push to stack,  "output: 4 3 5 + * 2" "stack: - ( +"
    check12 = 2: got to case 1, so print it to output,  "output: 4 3 5 + * 2" "stack: - ("
    check11 = (: got to case 2, so push to stack,  "output: 4 3 5 + *" "stack: - ("
    check10 = -: got to case 4, so push to stack since it is empty,  "output: 4 3 5 + *" "stack: -"
    check09 = ): got to case 3, so check top precedence and start poping until 2nd '(', "output: 4 3 5 + *" "stack: "
    check08 = ): got to case 3, so check top precedence and start poping until 2nd '(', "output: 4 3 5 +" "stack: ( *"
    check07 = 5: got to case 1, so print it to output, "output: 4 3 5" "stack: ( * ( +"
    check06 = +: got to case 4, so check precendency with stack top, "output: 4 3" "stack: ( * ( +"
    check05 = 3: got to case 1, so print it to output, "output: 4 3" "stack: ( * ("
    check04 = (: got to case 2, so push to stack, "output: 4" "stack: ( * ("
    check03 = *: got to case 4, so push to stack, "output: 4" "stack: ( *"
    check02 = 4: got to case 1, so print it to output, "output: 4" "stack: ("
    check01 = (: got to case 2, empty stack, so push to stack,  "output: " "stack: ("
    stack:

    NB: ')' & '(' are reverse in case for trw methods

*/

int prefixEvaluation(string chk){
    Stack <int>st;
    for(int i = chk.length()-1; i>=0; i--){
        // check[i] may be 0 to 9
        if(chk[i] >= '0' && chk[i] <= '9'){
            st.push(chk[i]-'0');  // (int) chk[i];
        }else{
            // check[i] may be operator +-*/
            int a = st.pop();
            int b = st.pop();

            switch(chk[i]){
            case '+':
                st.push(a+b);
                break;
            case '-':
                st.push(a-b);
                break;
            case '*':
                st.push(a*b);
                break;
            case '/':
                st.push(a/b);
             case '^':
                st.push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }
    return st.Top();
}

int precisionCalc(char c){
    if(c == '^'){
        return 3;
    }else if(c == '/' || c == '*'){
        return 2;
    }else if(c == '+' || c == '-'){
        return 1;
    }else{
        return -1;
    }
}

string infixToPrefix(string chk){
    // step 1: reverse the string

    reverse(chk.begin(),chk.end());
    // step 2: defind the stack and result output variable
    Stack <char> st;
    string result;
    for(int i = 0; i<chk.length();i++){
        // case 1:
        if(chk[i] >= '0' && chk[i] <= '9'){
            result += chk[i];
        // case 2:
        }else if(chk[i] == ')' ){
            st.push(chk[i]);
        // case 3:
        }else if(chk[i] == '(' ){
            while(!st.isEmpty() && st.Top() != ')' ){
                    result += st.pop();
                  }
                  // pop the ')' once
                  if(!st.isEmpty()) st.pop();
        // case 4:
        }else{
            while(!st.isEmpty() && precisionCalc(st.Top()) >= precisionCalc(chk[i]) ){
                result += st.pop();
            }
            // push the chk operator when find the less priority operator
            st.push(chk[i]);
        }
    }

    // print the remaining stack untill stack become empty
    while(!st.isEmpty()){
        result += st.pop();
    }
    // reverse the result again
    reverse(result.begin(),result.end());
    return result;

}

int main(){
   // string infix = "(7+(4*5))-(2+0)";
    string infix = " (+9*3/8 4)";
    string prefix;
    prefix = infixToPrefix(infix);
    int prefixEvRes = prefixEvaluation(prefix);
    cout<<"Prefix Result = "<<prefix<<endl
        <<"prefixEvaluation Result = "<<prefixEvRes<<endl;

    /*
    int prefixRes = prefixEvaluation("+*423");
    cout<<"Prefix Result = "<<prefixRes<<endl;
    int prefixEvaluation = prefixEvaluation("-+7*45+20");
    cout<<"prefixEvaluation Result = "<<prefixEvaluation<<endl;
    */
    return 0;
}


