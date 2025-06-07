#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    vector<long long> a(n),x(q);
    for(auto &y:a) cin>>y;
    for(auto &y:x) cin>>y;
    long long prev = 31;
    for(int i=0;i<q;i++){
        if(x[i]>=prev) continue;
        long long val=(int)pow(2,x[i]);
        for(int j=0;j<n;j++){
            if(a[j]%val==0)
            a[j]+=val/2;
        }
        prev = x[i];
    }

    for(auto &x:a){
        cout<<x<<" ";
    }
    cout<<"\n";
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