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
		vector<int> a(n);
		map<int,int> cnt;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a.begin(),a.end());
		for(auto i:a){
			cnt[i]++;
		}
		vector<pair<int,int>> vec(cnt.begin(),cnt.end());
		int ans=n;
		int left=0;
		for(int i=0;i<vec.size();i++){
			int right=n-left-vec[i].second;
			ans=min(ans,max(left,right));
			left+=vec[i].second;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
