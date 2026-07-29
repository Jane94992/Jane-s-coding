//https://acm.hdu.edu.cn/game/entry/problem/show.php?chapterid=1&sectionid=1&problemid=3008
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
    	int M;
    	cin>>M;
    	int sum=0;
    	while(M--){
    		int x;
    		cin>>x;
    		sum+=x;
		}
		cout<<sum<<endl<<endl;
    }
    return 0;
}
