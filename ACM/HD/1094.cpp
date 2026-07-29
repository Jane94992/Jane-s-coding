//https://acm.hdu.edu.cn/showproblem.php?pid=1094
#include<iostream>
using namespace std;

int main(){
    int N;
    while(cin>>N){
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
