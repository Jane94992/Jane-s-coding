#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		vector<int> c(205,0);
		int cnt=0;
		for(int i=0;i<N;i++){
			int x,y;
			cin>>x>>y;
			int l=(min(x,y)+1)/2;
			int r=(max(x,y)+1)/2;
			for(int j=l;j<=r;j++){
				c[j]++;
				if(c[j]>cnt) cnt=c[j];
			}
		}
		cout<<cnt*10<<endl;
	}
	return 0;
}
