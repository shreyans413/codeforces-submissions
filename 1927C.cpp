#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int> cnt(k+1,0);
    for(auto x:a){
        if(x<=k){
            cnt[x]|=1;
        }
    }
    for(auto x:b){
        if(x<=k){
            cnt[x]|=2;
        }
    }
    vector<int> c(4,0);
    for(int i=1;i<=k;i++){
        c[cnt[i]]++;
    }
    if(c[1]>k/2 || c[2]>k/2 || c[1]+c[2]+c[3]<k){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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