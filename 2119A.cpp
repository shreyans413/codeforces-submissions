#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
	int a,b;
	ll x,y;
	cin>>a>>b>>x>>y;
	if(a==b){
		cout<<0<<"\n";
		return;
	}
	const int MX=401;
	vector<ll> d(MX,1e18);
	priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;
	d[a]=0;
	pq.push({0,a});
	while(!pq.empty()){
		ll c=pq.top().first;
		int u=pq.top().second;
		pq.pop();
		if(c>d[u]) continue;
		if(u==b) break;
		if(u+1<MX && d[u]+x<d[u+1]){
			d[u+1]=d[u]+x;
			pq.push({d[u+1],u+1});
		}
		int v=u^1;
		if(v<MX && d[u]+y<d[v]){
			d[v]=d[u]+y;
			pq.push({d[v],v});
		}
	}
	if(d[b]==1e18) cout<<-1<<"\n";
    else cout<<d[b]<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}
