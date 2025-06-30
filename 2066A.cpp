#include <bits/stdc++.h>

using namespace std;

void solve() {
    int x,y;
    cin>>x>>y;
    if(x+1>=y && (x+1-y)%9==0){
        cout<<"Yes\n";
        return;
    }
    cout << "No\n";
    return;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--) solve();
	return 0;
}
