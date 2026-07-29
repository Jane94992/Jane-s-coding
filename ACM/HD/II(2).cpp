//https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=2&problemid=10
#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int FirstLeapYear(int Y){
	if((Y%4==0 && Y%100!=0) || (Y%400==0)) return Y;
	if(Y%100==0) return Y+4;
	return (Y/4+1)*4;
}
bool isLeapYear(int Y){
	if((Y%4==0 && Y%100!=0) || (Y%400==0)) return true;
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		int Y,N;
		cin>>Y>>N;
		int first=FirstLeapYear(Y);
		int pre=first;
		int cur=pre;
		N--;
		while(N--){
			cur=pre+4;
			if(!isLeapYear(cur)) cur=FirstLeapYear(cur);
			pre=cur; 
		}
		cout<<cur<<endl;
	}
	return 0;
}
