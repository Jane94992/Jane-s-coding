#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int A;
	while(cin>>A && A){
		string s="";
		while(A>0){
			s=to_string(A%2)+s;
			A/=2;
		}
		int len=s.size();
		int sum=1;
		int i=len-1;
		for(;i>=0;i--){
			if(s[i]=='1') break;
			sum*=2;
		}
		cout<<sum<<endl;
	} 
	return 0;
}
