#include <bits/stdc++.h>
using namespace std;
using ll=long long;

char find_max(string s,int &c){
    int cnt[26]={0};
    for(char i:s){
        cnt[i-'a']++;
    }
    int maxCnt=0;
    char maxLetter=0;
    for(int i=0;i<26;i++){
        if(cnt[i]>maxCnt){
            maxCnt=cnt[i];
            maxLetter='a'+i;
        }
    }
    c=maxCnt;
    return maxLetter;
}

string rearrange(string s){
    int n=s.size();
    int cnt[26]={0};
    for(char ch:s) cnt[ch-'a']++;
    vector<pair<int,char>> f;
    for(int i=0;i<26;i++){
        if(cnt[i]>0) f.push_back({cnt[i],'a'+i});
    }
    sort(f.rbegin(),f.rend());
    string ans(n,' ');
    int idx=0;
    for(auto &p:f){
        for(int i=0;i<p.first;i++){
            ans[idx]=p.second;
            idx+=2;
            if(idx>=n) idx=1;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        int len=s.size();
        int c;
        char mLetter=find_max(s,c);
        if(c>len-c+1){
            cout<<"No"<<endl;
            continue;
        }
        else{
            cout<<"Yes"<<endl;
            string ans=rearrange(s);
            cout<<ans<<endl;
        }
    }
    return 0;
}
