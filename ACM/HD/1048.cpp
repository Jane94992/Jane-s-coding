//https://acm.hdu.edu.cn/showproblem.php?pid=1048
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		if(s == "ENDOFINPUT") break;
		else if( s == "START") continue;
		else if( s == "END") continue;
		else{
			for(int i=0;i<s.size();i++){
				if(s[i]>='A' && s[i]<='Z'){
					s[i] = 'A' + (s[i]-'A'-5+26)%26;
				}
			}
			cout<<s<<endl;
		}
	}
	
	return 0;
}
