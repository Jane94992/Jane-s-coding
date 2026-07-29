#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod = 998244353;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,q;
	cin>>n>>q;
	string S;
	vector<ll> a(n);
	cin>>S;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<ll> fa(n+1,0);
	for(int i=1;i<=n;i++){
		fa[i]=a[i-1]+fa[i-1];
	}
	while(q--){
		ll sum=0;
		ll f_max=0;
		string t;
		cin>>t;
		int i=0;
		int len = t.size();
		while(true){
			i = S.find(t,i);
			if(i != string::npos){	
				int l=i,r=i+len;
				for(int j=r;j<=n;j++){
					for(int k=l;k>=0;k--){
						int x=fa[j]-fa[k];
						if(x>f_max) f_max=x;
						sum=(sum+x%mod)%mod;
					}
				}
			i+=len;
			}
			else break;
		}
		if(sum<0) sum+=mod;
		cout<<f_max<<' '<<sum<<endl;
	}
	return 0;
}
