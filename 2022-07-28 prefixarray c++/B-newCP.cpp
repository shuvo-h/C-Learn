#include<bits/stdc++.h>
using namespace std;


const int N = 100000;
int dataSt[N+10], store[4*N+10];
int inf = 1 << 28;
int n;

void rearrange(int node, int st, int en, int a[], int A[]){
    if(st==en){
        A[node] = a[st];
        return;
    }
    int mid = st+ ((en-st)>>1);
    int left = node<<1;
    int right = (node<<1)+1;
    rearrange(left, st, mid, a, A);
    rearrange(right, mid+1, en, a, A);
    A[node] = min(A[left], A[right]);
}

int queryArrange(int node, int st, int en, int a, int b, int A[]){
    if(a>b){
        return inf;
    }

    if(st==a && en==b){
        return A[node];
    }
    int mid = st+ ((en-st)>>1);
    int left = node<<1;
    int right = (node<<1)+1;

    int l = queryArrange(left, st, mid, a, min(b, mid), A);
    int r = queryArrange(right ,mid+1, en, max(a, mid+1), b, A);
    return min(l, r);
}

void runFn(int sum){
    rearrange(1, 1, sum, dataSt, store);
}
int searchEl(int x, int y){
    return queryArrange(1, 1, n, x, y, store);
}

int main(){
    int caseTimes;
    int q, a, b;
    cin >> caseTimes;
    for(int ct=1; ct<=caseTimes; ct++){
        cin >> n >> q;
        for(int i=1; i<=n; i++)
            cin>>dataSt[i];
        runFn(n);
        cout << "Case " << ct  <<  ":" << endl;
        for(int i=1; i<=q; i++){
            cin>>a>>b;
            cout<< searchEl(a, b)<<endl;
        }
    }
    return 0;
}
