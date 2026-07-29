#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	vector<int> A(N+1),B(N+1);
	for(int i=1;i<=N;i++){
		cin>>A[i];
	}
	for(int i=1;i<=N;i++){
		cin>>B[i];
	}
	bool flag = true;
	for(int i=1;i<=N;i++){
		if(i != B[A[i]]){
			flag = false;
			break;
		}
	}
	string ans = flag?"Yes":"No";
	cout<<ans<<endl;
	return 0;
}
