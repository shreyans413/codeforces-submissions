#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct MM{
    ll mx1,mx2,mn1,mn2;
    MM(ll a,ll b){
        mx1=mn1=a;mx2=mn2=b;
        if(mx1<mx2) swap(mx1,mx2);
        if(mn1>mn2) swap(mn1,mn2);
    }
    void add(ll x){
        mx2=max(mx2,x);mn2=min(mn2,x);
        if(mx1<mx2) swap(mx1,mx2);
        if(mn1>mn2) swap(mn1,mn2);
    }
    ll get(ll x){
        ll mi=mn1,mx=mx1;
        if(x==mn1) mi=mn2;
        if(x==mx1) mx=mx2;
        return mx-mi+1;
    }
};

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> a(n);
    for(auto &p:a) cin>>p.first>>p.second;
    if(n<=2){cout<<n;return;}
    MM x(a[0].first,a[1].first),y(a[0].second,a[1].second);
    for(ll i=2;i<n;i++){
        x.add(a[i].first);
        y.add(a[i].second);
    }
    ll ans=x.get(-1)*y.get(-1);
    for(ll i=0;i<n;i++){
        ll w=x.get(a[i].first),h=y.get(a[i].second);
        if(w*h==n-1) ans=min(ans,min((w+1)*h,w*(h+1)));
        else ans=min(ans,w*h);
    }
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t=1;cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
