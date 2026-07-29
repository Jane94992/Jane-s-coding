//https://acm.hdu.edu.cn/showproblem.php?pid=1092
#include<iostream>
using namespace std;

int main(){
	int N;
	while(cin>>N){
		if(N==0) break;
		long long sum=0;
		while(N--){
			int x;
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
