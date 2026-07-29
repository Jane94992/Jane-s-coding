#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int toD(int x,int y){
	int sum=0;
	int n=1;
	while(x>0){
		sum+=x%10*n;
		n*=y;
		x/=10;
	}
	return sum;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	while(cin>>N){
		cin.ignore();
		int sum=0;
		while(N--){
			string s;
			getline(cin,s);
			int c = s.find('(');
			string sx=s.substr(0,c);
			string sy = s.substr(c+1, s.size() - c - 1);
			int x=stoi(sx);
			int y=stoi(sy);
			sum+=toD(x,y);
		}
		cout<<sum<<endl;
	}
	return 0;
}
