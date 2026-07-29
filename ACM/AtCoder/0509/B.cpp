#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	vector<vector<int>> a(N+1);
	for(int i=1;i<=N;i++){
		int L;
		cin>>L;
		for(int j=1;j<=L;j++){
			int A;
			cin>>A;
			a[i].push_back(A);
		}
	}
	int X,Y;
	cin>>X>>Y;
	cout<<a[X][Y-1];
	return 0;
}
