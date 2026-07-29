#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,M;
	cin>>N>>M;
	priority_queue<int> A;
	priority_queue<int> B;
	int x;
	for(int i=0;i<N;i++){
		cin>>x;
		A.push(x);
	}
	for(int i=0;i<M;i++){
		cin>>x;
		B.push(x);
	}
	int cnt=0;
	while(!A.empty() && !B.empty()){
		int x=A.top();
		int y=B.top();
		if(x*2 >= y){
			cnt++;
			A.pop();
			B.pop();
		}
		else{
			B.pop();
		}
	}
	cout<<cnt<<endl;
	return 0;
}
