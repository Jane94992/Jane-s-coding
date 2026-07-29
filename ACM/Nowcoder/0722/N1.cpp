#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll n,k;
		cin>>n>>k;
		vector<ll> b(n);
		vector<ll> pref(n+1,0);
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++) pref[i+1]=pref[i]+b[i];
		ll sum=pref[n];
		if(k==1 || k==2){
			cout<<sum<<endl;
			continue;
		}
		
		ll max_gain=LLONG_MIN;

		if(k%2){//ji
			ll t=k/2;
			ll tot_left=pref[t];
			ll tot_right=0;
			for(int i=t;i<n-t;i++){
				ll M=b[i];//zhongweishu
				tot_right=pref[i+t+1]-pref[i];
				ll gain=k*M-tot_left-tot_right;
				if(gain>max_gain) {
					max_gain=gain;
				}
			} 
		}
		else{//ou
			ll t=k/2-1;
			ll tot_left=pref[t];
			ll tot_right=0;
			for(int i=t;i<n-t-1;i++){
				ll M=b[i]+b[i+1];
				tot_right=pref[i+t+2]-pref[i];
				ll gain=k/2*M-tot_left-tot_right;
				if(gain>max_gain) {
					max_gain=gain;

				}
			} 
		}
		ll ans = sum+max_gain;
		cout<<ans<<endl;
	}
	return 0;
}
