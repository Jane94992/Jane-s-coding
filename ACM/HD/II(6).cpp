#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while(getline(cin,s)){
		double gpa=0.0;
		int cnt=0;
		bool flag=1;
		for(auto i:s){
			if(i== ' ') continue;
			else if(i=='A'){
				cnt++;
				gpa+=4.0;
			}
			else if(i=='B'){
				cnt++;
				gpa+=3.0;
			}
			else if(i=='C'){
				cnt++;
				gpa+=2.0;
			}
			else if(i=='D'){
				cnt++;
				gpa+=1.0;
			}
			else if(i=='F'){
				cnt++;
			}
			else{
				flag=false;
				break;
			}
		}
		if(flag){
			gpa/=cnt;
			cout<<fixed<<setprecision(2)<<gpa<<endl;
		}
		else cout<<"Unknown letter grade in input"<<endl;
		
	}
	return 0;
}
