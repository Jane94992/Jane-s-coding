#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod = 998244353;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	ll N,M;
	cin>>T;

	while(T--){
		cin>>N>>M;
		ll cnt=0;
		int len=0;
		while(N>0){
			len++;
			N/=10;
		}
		for(int i=1;i<=N;i++){
			if(i%M==0) cnt=(cnt+N%mod)%mod;
			else{
				ll x=1;
				for(int j=1;j<=len;j++){
					x=x*10;
					if((x-1)%M==0) cnt=(cnt+x-x/10)%mod;
				}
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
