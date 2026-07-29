#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	vector<vector<int>> count(N+1);
	for(int i=1;i<=N;i++){
		int K;
		cin>>K;
		for(int j=0;j<K;j++){
			int A;
			cin>>A;
			count[A].push_back(i);
		}
	}
	for(int i=1;i<=N;i++){
		cout<<count[i].size()<<' ';
		for(int j=0;j<count[i].size();j++){
			cout<<count[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
