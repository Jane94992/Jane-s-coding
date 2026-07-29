#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,Q;
	cin>>N>>Q;
	vector<int> n(N,0);
	while(Q--){
		int a,b;
		cin>>a>>b;
		if(a==1){
			n[b-1]++;
			auto it=find(n.begin(),n.end(),0);
			if(it==n.end()){
				for(auto &i:n){
					i--;
				}
			}
		}
		if(a==2){
			int cnt=count_if(n.begin(),n.end(),[b](int &x){return x>=b;
			});
//			for(auto i:n){
//				if(i>=b) cnt++;
//			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}
