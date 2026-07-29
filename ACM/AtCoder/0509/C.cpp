#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll N,K;
	cin>>N>>K;
	K--;
	vector<vector<ll>> a(N);
	vector<ll> L(N);
	for(ll i=0;i<N;i++){
		cin>>L[i];
		a[i].resize(L[i]);
		for(ll j=0;j<L[i];j++){
			cin>>a[i][j];
		}
	}
	
	vector<ll> C(N);
	for(ll i=0;i<N;i++){
		cin>>C[i];
	}
	for(ll i=0;i<N;i++){
		ll x=C[i]*L[i];
		if(K>=x){
			K-=x;
		}
		else{
			int pos=K%L[i];
			cout<<a[i][pos]<<endl;
			break;
		}
	}
	return 0;
}

/*
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,K;
	cin>>N>>K;
	vector<vector<int>> a(N);
	for(int i=0;i<N;i++){
		int L;
		cin>>L;
        a[i].resize(L);
		for(int j=0;j<L;j++){
            cin >> a[i][j];
		}
	}
	
	vector<int> C(N);
	for(int i=0;i<N;i++){
		cin>>C[i];
	}
	
	vector<int> B;
	for(int i=0;i<N;i++){
		for(int j=0;j<C[i];j++){
			B.insert(B.end(),a[i].begin(),a[i].end());			
		}
	}
	cout<<B[K-1]<<endl;
	return 0;
}
*/
