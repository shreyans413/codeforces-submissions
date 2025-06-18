#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    ll ans=0,cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ans+=a[i];
        if(a[i]&1) cnt++;
    }
    if(cnt==0||cnt==n){
        cout<<*max_element(a.begin(),a.end())<<"\n";
    }else{
        cout<<ans-cnt+1<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
