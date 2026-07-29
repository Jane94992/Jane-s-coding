#include <bits/stdc++.h>
using namespace std;
using ll=long long;

//ÉÏ£¬ÏÂ£¬ÓÒ£¬×ó 
const int dx[4] = {1,-1,0,0};
const int dy[4] = {0,0,1,-1};

int eat(vector<vector<int>> g,int x,int y,int v){
	
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,q;
	cin>>n>>m>>q;
	vector<vector<int>> g(n,vector<int>(m,-1));
	int l=0;
	while(q--){
		int type;
		cin>>type;
		if(type == 1){
			int xx,yy,v;
			cin>>xx>>yy>>v;
			int x=xx^l;
			int y=yy^l;
			g[x][y]=v;
		}
		else if(type == 2){
			int xx,yy,v;
			cin>>xx>>yy>>v;
			int x=xx^l;
			int y=yy^l;
		}
	}
	return 0;
}
