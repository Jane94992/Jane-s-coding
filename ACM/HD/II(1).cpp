#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	int cnt=0;
	while(cin>>n && n){
		cnt++;
		vector<int> h(n);
		int tot=0;
		for(int i=0;i<n;i++){
			cin>>h[i];
			tot+=h[i];
		}
		int ave=tot/n;
		int mov=0;
		for(int i=0;i<n;i++){
			if(h[i]>ave) mov+=h[i]-ave;
		}
		cout<<"Set #"<<cnt<<endl;
		cout<<"The minimum number of moves is "<<mov<<'.'<<endl;
	}
	return 0;
}
