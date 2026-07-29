#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a=0;
		ll b=0;
		bool flag = false;
		for(;b<=n;b+=12){
			a=n-b;
			string aa=to_string(a);
			string raa=aa;
			reverse(raa.begin(),raa.end());
			if(raa == aa){
				flag = true;
				break;
			}
		}
		if(flag){
			cout<<a<<' '<<b<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
