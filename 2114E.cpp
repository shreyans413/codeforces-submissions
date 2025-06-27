#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll> a,res;
vector<vector<ll>> g;

void dfs(ll v,ll p,ll mn,ll mx){
    res[v]=max(a[v],a[v]-mn);
    mn=min(a[v],a[v]-mx);
    for(ll u:g[v]){
        if(u!=p) dfs(u,v,mn,res[v]);
    }
}

void solve(){
    ll n;cin>>n;
    a.resize(n);
    g.assign(n,{});
    res.assign(n,0);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n-1;i++){
        ll u,v;cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0,-1,0,0);
    for(ll x:res) cout<<x<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--) solve();
}
