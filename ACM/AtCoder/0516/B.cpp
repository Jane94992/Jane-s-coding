#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int H,W;
	cin>>H>>W;
	if(H==1 && W==1){
		cout<<0;
		return 0;
	}
	if(H==1){
		vector<int> G(W,2);
		G[0]=1;
		G[W-1]=1;
		for(auto& i:G){
			cout<<i<<' ';
		}
		return 0;
	}
	if(W==1){
		vector<int> G(H,2);
		G[0]=1;
		G[H-1]=1;
		for(auto& i:G){
			cout<<i<<endl;
		}
		return 0;
	}
	vector<vector<int>> G(H,vector<int>(W,4));
	G[0][0]=2;
	G[0][W-1]=2;
	G[H-1][0]=2;
	G[H-1][W-1]=2;
	for(int i=1;i<H-1;i++){
		G[i][0]=3;
		G[i][W-1]=3;
	}
	for(int j=1;j<W-1;j++){
		G[0][j]=3;
		G[H-1][j]=3;
	}
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout<<G[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
