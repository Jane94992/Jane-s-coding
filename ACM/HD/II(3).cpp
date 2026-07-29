#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n,m;
		cin>>n>>m;
		int cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int x;
				cin>>x;
				cnt+=x;
			}
		}	
		cout<<cnt<<endl;
	}
	
	
	return 0;
}
