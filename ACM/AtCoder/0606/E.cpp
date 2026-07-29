#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll N,Q;
	cin>>N>>Q;
	vector<vector<int>> G(N,vector<int>(N,0));
	while(Q--){
		int type;
		cin>>type;
		if(type == 1){
			ll R;
			cin>>R;
			for(int j=0;j<N;j++){
				G[R-1][j]=1;
			}
		}
		else if(type == 2){
			ll C;
			cin>>C;
			for(int i=0;i<N;i++){
				G[i][C-1]=0;
			}
		}
		int tot=0;
		for(auto &i:G){
			tot += accumulate(i.begin(),i.end(),0);
		}
		cout<<tot<<endl;
	}
	return 0;
}
