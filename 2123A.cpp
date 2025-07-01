#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
    cin>>n;
	int c0=n/4,c1=n/4,c2=n/4,c3=n/4;
	int r=n%4;
	if(r>=1) c0++;
	if(r>=2) c1++;
	if(r>=3) c2++;
	if(c0==c3 && c1==c2) cout<<"Bob\n";
    else cout<<"Alice\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}
