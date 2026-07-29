#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int X;
	ll Q;
	cin>>X>>Q;
	
	priority_queue<int> maxH;
	priority_queue<int,vector<int>,greater<int>> minH;
	maxH.push(X);
	int mid=X;
	for(ll i=0;i<Q;i++){
		for(int j=0;j<2;j++){
			int A;
			cin>>A;
			if(A>mid) minH.push(A);
			else maxH.push(A);
		}
//		cout<<"maxH.size()="<<maxH.size()<<endl;
//		cout<<"minH.size()="<<minH.size()<<endl;
		if(maxH.size()>minH.size()+1){
			while(maxH.size()>minH.size()+1){
				minH.push(maxH.top());
				maxH.pop();
			}
			mid=maxH.top();
		}
		else{
			while(minH.size()>maxH.size()-1){
				maxH.push(minH.top());
				minH.pop();
			}
			mid=maxH.top();
		}
		cout<<mid<<endl;
	}
	return 0;
}
