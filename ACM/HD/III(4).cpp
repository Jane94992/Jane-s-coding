#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while(getline(cin,s)){
		
		vector<ll> num;
		int len=s.size();
		int i,j=0;
		while(j<len && s[j]=='5') j++;
		i=j;
		j=i+1;
		while(j<len){
			if(s[j]=='5'){
				string sn=s.substr(i,j-i);
				ll n=stoi(sn);
				num.push_back(n);
				while(j<len && s[j]=='5') j++;
				i=j;
				j=i+1;
			}
			else j++;
		}
		if(i<len){
			string sn=s.substr(i,j-i);
			ll n=stoll(sn);
			num.push_back(n);
		}
		sort(num.begin(),num.end());
		for(auto &i:num) cout<<i<<' ';
		cout<<endl;
	}
	return 0;
}
