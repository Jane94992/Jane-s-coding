#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin>>N;
	string ans="";
	for(int i=0;i<N;i++){
		string s;
		cin>>s;
		char x=s[0];
		switch(x){
			case 'a':
			case 'b':
			case 'c':
				ans+="2";
				break;
			case 'd':
			case 'e':
			case 'f':
				ans+="3";
				break;
			case 'g':
			case 'h':
			case 'i':
				ans+="4";
				break;
			case 'j':
			case 'k':
			case 'l':
				ans+="5";
				break;
			case 'm':
			case 'n':
			case 'o':
				ans+="6";
				break;
			case 'p':
			case 'q':
			case 'r':
			case 's':
				ans+="7";
				break;
			case 't':
			case 'u':
			case 'v':
				ans+="8";
				break;
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				ans+="9";
				break;
		}
	}
	cout<<ans;
	return 0;
}
