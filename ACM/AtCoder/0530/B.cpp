#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll x1,y1,r1,x2,y2,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		ll d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		ll rr=(r1+r2)*(r1+r2);
		ll rrr=(r1-r2)*(r1-r2);
		if(d>rr) cout<<"No"<<endl;
		else if(d>=rrr)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
