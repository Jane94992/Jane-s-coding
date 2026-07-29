//https://acm.hdu.edu.cn/showproblem.php?pid=1093
#include<iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	while(N--){
		int M;
		cin>>M;
		long long sum=0;
		while(M--){
			int x;
			cin>>x;
			sum+=x;
		}
		cout<<sum<<endl;
	}
	return 0;
}
