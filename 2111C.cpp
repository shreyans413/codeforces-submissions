#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    long long l=0,r=0,ans=LLONG_MAX;
    while(r<n){
        if(a[r]!=a[l]){
            l=r;
        }
        ans=min(ans,1LL*a[l]*(n-1-r+l));
        r++;
    }
    cout<<ans<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}