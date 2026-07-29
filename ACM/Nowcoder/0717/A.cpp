#include <bits/stdc++.h>
using namespace std;
using ll=long long;



int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.size() != 8){
			cout<<"Well-Being"<<endl;
			continue;
		}
		int flag = 0;
		for(int i=0;i<s.size()-1;i+=2){
			char a=s[i];
			char b=s[i+1];
			if(a == 'a' || a =='e' || a == 'i' || a =='o' || a =='u'){
				flag = 1;
				break;
			}
			if(b != 'a' && b !='e' && b != 'i' && b !='o' && b !='u'){
				flag = 1;
				break;
			}
		}	
		if(flag) cout<<"Well-Being"<<endl;
		else cout<<"Suspected Virus"<<endl;
	}
	return 0;
}
