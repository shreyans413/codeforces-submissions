#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    ll ans=0;
    for(int k=2;k<n;k++){
        ll tar;
        if(k==n-1) tar=a[k];
        else tar=max(a[k],a[n-1]-a[k]);
        int l=0,r=k-1;
        while(l<r){
            if(a[l]+a[r]>tar){
                ans+=r-l;
                r--;
            }
            else l++;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
