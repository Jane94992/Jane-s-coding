#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll p[30];

void insert(ll x){
	for(int i=29;i>=0;i--){
		if((x>>i&1) ==0) continue;
		if(p[i]==0){
			p[i]=x;
			break;
		}
		else{
			x^=p[i];
		}
	} 
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin>>T;
	
	while(T--){
		int n;
		cin>>n;
		
		vector<ll> a(n);
		ll S=0;//initialization
		memset(p,0,sizeof(p));
		for(int i=0;i<n;i++){
			cin>>a[i];
			S^=a[i];
		}
		for(int i=0;i<n;i++){
			ll x= a[i] & ~S;
			insert(x);
		}
		
		ll best=0;
		for(int i=29;i>=0;i--){
			if((best^p[i])>best){
				best^=p[i];
			}
		}
		ll ans = S + 2*best;
		cout<<ans<<endl;
	}
	return 0;
}
