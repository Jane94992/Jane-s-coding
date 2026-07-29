#include <bits/stdc++.h>
using namespace std;
using ll=long long;

struct Student{
	int id,P,score;
	string time;
};


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N;
	while(cin>>N && N>0){
		vector<Student> s(N);
		for(int i=0;i<N;i++){
			s[i].id=i;
			cin>>s[i].P>>s[i].time;
			if(s[i].P==5) s[i].score=100;
			else if(s[i].P==0) s[i].score=50;
		}
		for(int p=1;p<5;p++){
			vector<Student*> group;
			for(auto &i:s){
				if(i.P==p) group.push_back(&i);
			}	
			if(group.empty()) continue;
		
			sort(group.begin(),group.end(),[](Student *a,Student *b){
				return a->time<b->time;
			});
		
			int half=group.size()/2;
			int highscore,lowscore;
			if(p==4){
				highscore=95;
				lowscore=90;
			}
			if(p==3){
				highscore=85;
				lowscore=80;
			}
			if(p==2){
				highscore=75;
				lowscore=70;
			}
			if(p==1){
				highscore=65;
				lowscore=60;
			}
		
			for(int i=0;i<group.size();i++){
				group[i]->score=(i<half)?highscore:lowscore;
			}
		}
		for(int i=0;i<N;i++){
			cout<<s[i].score<<'\n';
		}
		cout<<'\n'; 
	}
	return 0;
}
