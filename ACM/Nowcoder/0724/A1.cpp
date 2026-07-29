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
	
	int cnt[29][4]={};
	int one29=0;
	
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		for(int j=0;j<29;j++){
			int bj=(a>>j)&1;
			int bj1=(a>>(j+1))&1;
			int s=(bj<<1)|bj1;
			cnt[j][s]++;
		}
		one29 +=(a>>29)&1;
	}
	
	
	int m;
	cin>>m;
	while(m--){
		int type,x;
		cin>>type>>x;
		
		for(int j=0;j<29;j++){
			int xj=(x>>j)&1;
			int xj1=(x>>(j+1))&1;
			
			int new_cnt[4]={};
			for(int k=0;k<4;k++){
				int bj=(k>>1)&1;
				int bj1=k&1;
				
				int nbj,nbj1;
				if(type==1){
					nbj=bj&xj;
					nbj1=bj1&xj1;
				}
				else if(type==2){
					nbj=bj|xj;
					nbj1=bj1|xj1;
				}
				else if(type==3){
					nbj=bj^xj;
					nbj1=bj1^xj1;
				}
				
				int nk=(nbj<<1)|nbj1;
				new_cnt[nk]+=cnt[j][k];
			}
			for(int k=0;k<4;k++) cnt[j][k]=new_cnt[k];
		}
		int x29=(x>>29)&1;
		if(type==1){
			if(x29==0) one29=0;
		}
		else if(type==2){
			if(x29==1) one29=n;
		}
		else if(type==3){
			if(x29==1) one29=n-one29;
		}
		
		ll ans=one29;
		for(int j=0;j<29;j++){
			ans+=cnt[j][2];
		}
		cout<<ans<<'\n';
	}
	return 0;
}
