#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		for(auto &it:s){
			it='A'+(it-'A'+1)%26;
		}
		cout<<"String #"<<i<<endl;
		cout<<s<<endl<<endl;
	}
	return 0;
}
