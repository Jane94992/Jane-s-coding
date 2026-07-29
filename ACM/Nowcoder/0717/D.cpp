#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod = 998244353;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m;
	cin>>m;
	vector<int> s(m);
	ll total_V=1;
	for(int i=0;i<m;i++){
		cin>>s[i];
		total_V*=s[i];
	}
	sort(s.begin(),s.end());
	int id=0;
	vector<ll> V(2,0);
	while(total_V !=1){
		ll cut=total_V/s[m-1];
		//
		cout<<id<<':'<<cut<<endl;
		//
		V[id]+=cut;
		id=1-id;
		s[m-1]--;
		total_V-=cut;
		sort(s.begin(),s.end());
	}
	ll C=V[0]-V[1];
	cout<<C<<endl;
	return 0;
}
