#include <bits/stdc++.h>
using namespace std;
using ll=long long;

unordered_map<char, string> m = {
    {' ', "%20"},
    {'!', "%21"},
    {'$', "%24"},
    {'%', "%25"},
    {'(', "%28"},
    {')', "%29"},
    {'*', "%2a"}
};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while(getline(cin,s) && s!="#"){
		string ns("");
		for(auto i:s){
			auto it=m.find(i);
			if(it!=m.end()){
				ns += it->second;
			}
			else ns.push_back(i);
		}
		cout<<ns<<endl;
	}
	return 0;
}
