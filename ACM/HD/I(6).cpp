//https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3006
#include<iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
    	int sum=0;
    	while(N--){
    		int x;
    		cin>>x;
    		sum+=x;
		}
		cout<<sum<<endl;
    }
    return 0;
}
