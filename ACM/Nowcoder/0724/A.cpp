#include <bits/stdc++.h>
using namespace std;
using ll=long long;

ll one[30];
ll lxone[30];

void add(int a,int flag){
	for(int i=0;i<30;i++){
		if((a>>i)&1){
			one[i]+=flag;
			if(i+1<30 &&((a>>(i+1))&1)) lxone[i]+=flag;
		}
	}
}

ll ans(){
	int res=0;
	for(int i=0;i<30;i++){
		res+=one[i]-lxone[i];
	}
	return res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		add(a[i],1);
	}

	
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int type,x;
		cin>>type>>x;
		if(type==1){
			for(int i=0;i<n;i++){
				add(a[i],-1);
				a[i]&=x;
				add(a[i],1);
			}
		}
		else if(type==2){
			for(int i=0;i<n;i++){
				add(a[i],-1);
				a[i]|=x;
				add(a[i],1);
			}
		}
		else if(type==3){
			for(int i=0;i<n;i++){
				add(a[i],-1);
				a[i]^=x;
				add(a[i],1);
			}
		}
		cout<<ans()<<endl;
	}
	return 0;
}
