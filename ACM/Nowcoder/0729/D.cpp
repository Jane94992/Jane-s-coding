#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(int n){
	vector<int> ans(n);
	ans[0]=1;
	ans[1]=3;
	int a=2;
	int b=n;
	for(int i=2;i<n;i++){
		ans[i]=(i%2)?a++:b--;
	}
	for(auto &i:ans){
		cout<<i<<' ';
	}
	cout<<'\n';
	return ;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll n;
		cin>>n;
		if(n==1) cout<<1<<'\n';
		else if(n==2) cout<<1<<' '<<2<<'\n';
		else if(n==3) cout<<"1 3 2"<<'\n';
		else if(n==4) cout<<"1 3 2 4"<<'\n';
		else{
			solve(n);
		}
	}
	return 0;
}
