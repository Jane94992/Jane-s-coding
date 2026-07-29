#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string S;
	int N;
	cin>>S>>N;
	int len=S.size();
	S=S.substr(N,len-2*N);
	cout<<S;
	return 0;
}
