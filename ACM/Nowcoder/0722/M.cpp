#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll n,m;
		cin>>n>>m;
		ll s=min(n,m+1);
		ll c=s*(s-1)/2-m;
		cout<<c<<endl;
	}
	return 0;
}
