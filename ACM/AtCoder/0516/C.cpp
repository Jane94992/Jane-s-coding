#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string S;
	cin>>S;
	ll sum=0;
	ll len=S.size();
	for(ll i=0;i<len;i++){
		if(S[i]=='C'){
			sum+=min(i+1,len-i);
		}
	}
	cout<<sum;
	return 0;
}
