#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c;
	cin>>c;
	while(c--){
		int n;
		cin>>n;
		vector<int> num(n);
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		sort(num.begin(),num.end());
		cout<<num[1]<<endl;
	}
	return 0;
}
