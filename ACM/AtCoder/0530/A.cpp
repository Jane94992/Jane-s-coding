#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,M;
	cin>>N>>M;
	int cnt=0;
	while(M!=0){
		cnt++;
		M=N%M;
	}
	cout<<cnt;
	return 0;
}
