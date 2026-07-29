#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> b(n);
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b.begin(),b.end(),[](ll x,ll y){ return x>y;
		});
		bool flag = true;
		for(int i=2;i<n;i++){
			if(b[i] != b[i-2]%b[i-1]){
				flag = false;
				break;
			}
		}
		if(flag){
			cout<<b[0]<<' '<<b[1]<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}
