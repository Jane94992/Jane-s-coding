#include <bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int> kmp(const string &pattern,const string &text){
	string s= pattern+"#"+text;
	int n=s.size();
	vector<int> pi(n,0),pos;
	for(int i=1;i<n;i++){
		int j=pi[i-1];
		while(j>0 && s[i]!=s[j]) j=pi[j-1];
		if(s[i]==s[j]) ++j;
		pi[i]=j;
		if(j==(int)pattern.size()){
			pos.push_back(i-2*(int)pattern.size());
		}
	}
	return pos;
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k; 
		cin>>k;
		string pattern="Rounddo"+string(k,'g');
		int len = pattern.size(),n=s.size();
		if(n<len){
			cout<<0<<'\n';
			continue;
		}
		s=s+s.substr(0,n-1);
		vector<int> match_pos=kmp(pattern,s);
		
		vector<pair<int,int>> intervals;
		for(int p:match_pos){
			int L=max(0,p-(n-len));
			int R=min(n-1,p);
			if(L<=R) intervals.push_back({L,R});
		}
		
		sort(intervals.begin(),intervals.end());
		int ans=0;
		int curL=-1,curR=-1;
		for(auto &i:intervals){
			int l=i.first,r=i.second;
			if(curL==-1){
				curL=l;
				curR=r;
			}
			else if(l<=curR+1){
				curR=max(curR,r);
			}
			else{
				ans+=curR-curL+1;
				curL=l;
				curR=r;
			}
		}
		if(curL != -1) ans+=curR-curL+1;
		cout << ans << '\n';
	}
	return 0;
}
