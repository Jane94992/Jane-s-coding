#include<bits/stdc++.h>
using namespace std;

long long N,K;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>N>>K;
	vector<long long> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	while(K--){
		auto it=min_element(a.begin(),a.end());
		int i=it-a.begin();
		cout<<i<<' ';
		*it+=i+1;
	}
	cout<<*(min_element(a.begin(),a.end()))<<endl;
	return 0;
}
