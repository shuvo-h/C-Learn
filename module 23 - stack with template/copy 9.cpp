#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l[10005];
    int r[10005];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&l[i],&r[i]);
	}
	int lst=0;
	for(int i=1;i<=n;i++){
		if(l[i]==0){
			l[i]=lst;
			r[lst]=i;
			while(r[lst]!=0){
				lst=r[lst];
			}
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d %d\n",l[i],r[i]);
	}
	return 0;
}

