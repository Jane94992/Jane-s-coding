#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N, Q;
int query_count = 0;

// 比较函数，自动管理查询次数
bool compare(char a, char b) {
    if (query_count >= Q) {
        // 如果超出查询限制，返回默认顺序
        return a < b;
    }
    
    cout << "? " << a << " " << b << endl;
    char ans;
    cin >> ans;
    query_count++;
    
    return ans == '<';
}

int main() {
    cin >> N >> Q;
    
    string s;
    for (int i = 0; i < N; i++) {
        s += char('A' + i);
    }
    
    // 使用标准排序，传入自定义比较函数
    sort(s.begin(), s.end(), compare);
    
    // 输出结果
    cout << "! " << s << endl;
    
    return 0;
}

/*
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
	int N,Q;
	cin>>N>>Q;
	string s;

	for(int i=0;i<N;i++){
		s+=char('A'+i);
	}
	int cnt=0;
	for(int i=0;i<N && cnt<Q;i++){
		for(int j=0;j<N-1-i && cnt<Q;j++){
			cout<<'?'<<' '<<s[j]<<' '<<s[j+1]<<endl;
			char ans;
			cin>>ans;
			cnt++;
			if(ans=='>') swap(s[j],s[j+1]);
		}
	}
	cout<<'!'<<' '<<s<<endl;
	return 0;
}
*/
