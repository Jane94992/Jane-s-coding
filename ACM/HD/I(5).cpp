//https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3005
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
    	int sum=0;
    	int M;
    	cin>>M;
    	while(M--){
    		int x;
    		cin>>x;
    		sum+=x;
		}
		cout<<sum<<endl;
    }
    return 0;
}
