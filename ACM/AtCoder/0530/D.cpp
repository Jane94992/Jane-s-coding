#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int H,W;
	cin>>H>>W;
	vector<vector<int>> G(H,vector<int>(W,0));//0-white
	for(int i =0;i<H;i++){
		string s;
		cin>>s;
		for(int j=0;j<W;j++){
			if(s[j]=='#') G[i][j]=1; //1-black
		}
	}
	
	for(int i=0;i<H;i++){
		for(int j=0;j<W;j++){
			cout<<G[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	
	int times=1;
	vector<int*> black;
	for(int k=1;k<=times;k++){
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				if(G[i][j]==1){
					if(i-1>=0 && j-1>=0 && G[i-1][j-1]==0) G[i-1][j-1]=1;
					if(i-1>=0 && G[i-1][j]==0) G[i-1][j]=1;
					if(i-1>=0 && j+1<W && G[i-1][j+1]==0) G[i-1][j+1]=1;
					if(j-1>=0 && G[i][j-1]==0) G[i][j-1]=1;
					if(j+1<W && G[i][j+1]==0) G[i][j+1]=1;
					if(i+1<H && j-1>=0 && G[i+1][j-1]==0) G[i+1][j-1]=1;
					if(i+1<H && G[i+1][j]==0) G[i+1][j]=1;
					if(i+1<H && j+1<W && G[i+1][j+1]==0) G[i+1][j+1]=1;
					black.push_back(&G[i][j]);
				}
			}
		}
		for(auto it:black){
			cout<<*it<<' ';
			*it=0;
		}
		cout<<endl;
		
		cout<<"times:"<<k<<endl;
		for(int i=0;i<H;i++){
			for(int j=0;j<W;j++){
				cout<<G[i][j]<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
