#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		int ans = false;
		if(((n - 1) % x == 0) && ((m - 1) % y == 0))
			ans = true;
		else if(!ans && (n >= 2) && (m >= 2) && ((n - 2) % x == 0) && ((m - 2) % y == 0))
			ans = true;
		if(ans)
			cout<<"Chefirnemo\n";
		else cout<<"Pofik\n";
	}
	return 0;
}
