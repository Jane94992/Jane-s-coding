#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	vector<int> a(N+1);
	for(int i=1;i<=N;i++){
		cin>>a[i];
	}
	int X;
	cin>>X;
	cout<<a[X];
	return 0;
}
