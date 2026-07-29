#include <bits/stdc++.h>
using namespace std;
using ll=long long;

bool cmp(vector<int> &a,vector<int> &b){
	if(a[0]!=b[0]) return a[0]<b[0];
	return a[1]<b[1];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		vector<vector<int>> move(N,vector<int>(2));
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			move[i][0]=(min(x,y)+1)/2;
			move[i][1]=(max(x,y)+1)/2;
		}
		sort(move.begin(),move.end(),cmp);
		int cnt=0;
		while(!move.empty()){
			cnt++;
			int end=-1;
			for(auto i=move.begin();i!=move.end();){
				if((*i)[0]>end){
					end=(*i)[1];
					i=move.erase(i);
				}
				else i++;
			}
		}
		cout<<cnt*10<<endl;
	}
	return 0;
}
