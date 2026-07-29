#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string S;
	cin>>S;
	string ans;
	for(int i=0;i<S.size();i++){
		if(S[i]>='0' && S[i]<='9') ans.push_back(S[i]);
	}
	cout<<ans;
	return 0;
}
