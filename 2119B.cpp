#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
	int n; 
    cin>>n;
	ll px,py,qx,qy; 
    cin>>px>>py>>qx>>qy;
	ll sum=0,mx=0;
	for(int i=0;i<n;i++){
		ll x; 
        cin>>x;
		sum+=x;
		mx=max(mx,x);
	}
	ll dx=px-qx,dy=py-qy;
	ll d2=dx*dx+dy*dy;
	ll maxr=sum*sum;
	ll minv=max(0LL,2*mx-sum);
	ll minr=minv*minv;
	if(d2>=minr && d2<=maxr) cout<<"Yes\n";
	else cout<<"No\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t; 
    cin>>t;
	while(t--) solve();
	return 0;
}
