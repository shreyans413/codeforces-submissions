#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n+1),cnt(30,0);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        for(ll j=0;j<30;j++){
            if((a[i]>>j)&1) cnt[j]++;
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
        ll tot=0;
        for(ll j=0;j<30;j++){
            if((a[i]>>j)&1) tot+=(1LL<<j)*(n-cnt[j]);
            else tot+=(1LL<<j)*cnt[j];
        }
        ans=max(ans,tot);
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
