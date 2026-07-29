#include <bits/stdc++.h>
using namespace std;
using ll=long long;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin>>T;
	while(T--){
		ll k,x1,x2,y1,y2;
		cin>>k>>x1>>y1>>x2>>y2;
		int maxScore,minScore;
		ll dx=x2-x1;
		ll dy=y2-y1;
		// 最小连胜
        ll mn = (dx + dy) / (dy + 1); 

        // 最大连胜
        ll mx = dx;
        if (dy > 0) {
            ll limit = max(0LL, k - max(x1, y1) + 1) + 1;
            mx = min(dx, limit);
        }
		cout<<mn<<' '<<mx<<endl;
	}
	return 0;
}
