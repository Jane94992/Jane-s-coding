#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll N,K,M;
	cin>>N>>K>>M;
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>> > qq;
	ll tot=0;
	unordered_map<ll,ll> cnt;
	ll col=0;
	for(int i=0;i<N;i++){
		ll C,V;
		cin>>C>>V;
		cnt[C]++;
		tot+=V;
		qq.push({V,C});
	}
	col = cnt.size(); //现有颜色数 
	ll pp = N - K;  //需要删掉的数量 
	while(pp>0){
		auto p= qq.top();  //价值最小的 
		ll pc=p.second;
		ll pv=p.first;
		if(cnt[pc] == 1){
			if(col <=M){
				qq.pop();
				continue;	
			}
			else{
				cnt[pc]--;
				col--;
				pp--;
				tot-=pv;
				qq.pop();
			}
		}
		else if(cnt[pc] >1){
			cnt[pc]--;
			pp--;
			tot-=pv;
			qq.pop();
		}
	}
	cout<<tot<<endl;
	return 0;
}
