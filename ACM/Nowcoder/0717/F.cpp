#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k,x;
	cin>>n>>k>>x;
	vector<int> P(n);
	for(int i=0;i<n;i++){
		cin>>P[i];
	}
	int FP=0;
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			FP+=P[j]%n-P[i]%n;
			FP%=n;
		}
	}
	cout<<"FP="<<FP<<endl;
	vector<int> p(n);
	p[k]=x;

	return 0;
}
