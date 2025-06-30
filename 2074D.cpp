#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll isqrt(ll x){
	ll v=sqrtl(x)+5;
	while(v*v>x) v--;
	return v;
}

void solve(){
	int n,m;cin>>n>>m;
	map<ll,ll> cnt;
	vector<ll> a(n),r(n);
	for(auto &x:a) cin>>x;
	for(auto &x:r) cin>>x;
	for(int i=0;i<n;i++){
		ll aa=a[i],rr=r[i];
		for(ll x=aa-rr;x<=aa+rr;x++){
			cnt[x]=max(cnt[x],2*isqrt(rr*rr-(x-aa)*(x-aa))+1);
		}
	}
	ll ans=0;
	for(auto &[x,c]:cnt) ans+=c;
	cout<<ans<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	while(t--) solve();
	return 0;
}
