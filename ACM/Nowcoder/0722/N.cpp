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
			pref[i+1]=pref[i]+b[i];
		}
		//
		cout<<"b数组为："<<endl;
		for(int i=0;i<n;i++) cout<<b[i]<<' ';
		cout<<endl;
		cout<<"pref数组为："<<endl;
		for(int i=0;i<=n;i++) cout<<pref[i]<<' '; 
		cout<<endl;
		//
		
		ll sum=pref[n];
		sort(b.begin(),b.end());
		
		//
		cout<<"排序后b数组为："<<endl;
		for(int i=0;i<n;i++) cout<<b[i]<<' ';
		cout<<endl;
		//
		
		double max_gain=0.0;
		
		//
		ll max_M1=0;
		double max_M2=0.0;
		//
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
					max_M1=M;
				}
			} 
		}
		else{//ou
			ll t=k/2-1;
			ll tot_left=pref[t];
			ll tot_right=0;
			for(int i=t;i<n-t+1;i++){
				double M=(b[i]+b[i+1])/2.0;
				tot_right=pref[i+t+2]-pref[i];
				ll gain=k*M-tot_left-tot_right;
				if(gain>max_gain) {
					max_gain=gain;
					max_M2=M;
				}
			} 
		}
		double ans = sum+max_gain;
		cout<<ans<<endl;
		if(k%2) cout<<max_M1<<endl;
		else cout<<max_M2<<endl;
	}
	return 0;
}
