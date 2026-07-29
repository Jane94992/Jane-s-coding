#include <bits/stdc++.h>
using namespace std;
using ll=long long;

string str="HelloWorld";

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int X;
	cin>>X;
	str=str.substr(0,X-1)+str.substr(X);
	cout<<str;
	return 0;
}
