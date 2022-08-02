#include<bits/stdc++.h>
using namespace std;

// declaration global
#define MAXN 100000+10
int N, M;
int C[MAXN<<1];
int k = 1;

int minValue(int num){
    return num & (-num);
}
int sumNum(int num){
    int sum = 0;
    while(num > 0){
        sum += C[num];
        num -= minValue(num);
    }
    return sum;
}

void modify(int value, int digit){
    while(value <= N){
        C[value] += digit;
        value += minValue(value);
    }
}
void calc(){
    int a, b, d, op;
    cout<<"Case "<<k++<<":"<<endl;
    while(M--){
            cin>>op;
        if(op == 1){
            cin>>a;
            a++;
            cout<<sumNum(a) - sumNum(a-1)<<endl;
            int t = sumNum(a) - sumNum(a-1);
            modify(a, -t);
        }else if(op == 2){
            cin>>a;
            cin>>d;
            a++;
            modify(a, d);
        }else{
            scanf("%d%d", &a, &b);
            a++, b++;
            printf("%d\n", sumNum(b) - sumNum(a-1));
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>N;
        cin>>M;
        memset(C, 0, sizeof(C));
        int x;
        for(int i = 1; i <= N; i++){
            cin>>x;
            modify(i, x);
        }
        calc();
    }
    return 0;
}
