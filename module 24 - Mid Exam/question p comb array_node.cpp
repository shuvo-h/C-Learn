#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int left[10005];
    int right[10005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>left[i]>>right[i];
	}
	int first=0;
	for(int i=1;i<=n;i++){
		if(left[i]==0){
			left[i]=first;
			right[first]=i;
			while(right[first]!=0){
				first=right[first];
			}
		}
	}


	for(int i=1;i<=n;i++){
		cout<<left[i]<<" "<<right[i]<<endl;
	}

	return 0;
}

