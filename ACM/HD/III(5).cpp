#include <bits/stdc++.h>
using namespace std;
using ll=long long;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int v,n;
	while(cin>>v>>n && v){
		vector<vector<int>> val(n,vector<int>(2));
		for(int i=0;i<n;i++){
			cin>>val[i][0]>>val[i][1];
		}
		sort(val.begin(),val.end(),[](vector<int> & a,vector<int> & b){
			if(a[0]!=b[0]) return a[0]>b[0];
			return a[1]>b[1];
		});
		int ans=0;
		int i=0;
		while(v>0 && i<n){
			if(val[i][1]<=v){
				v-=val[i][1];
				ans+=val[i][0]*val[i][1];
			}
			else{
				ans+=val[i][0]*v;
				break;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
