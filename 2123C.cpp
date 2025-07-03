#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    if(n==1){
        cout<<"1\n";
        return;
    }
    vector<int> pre(n),suf(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++) {
        pre[i]=min(pre[i-1],a[i]);
    }
    suf[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--) {
        suf[i]=max(suf[i+1],a[i]);
    }
    unordered_set<int> s;
    s.insert(pre[n-1]);
    s.insert(suf[0]);
    for(int i=1;i<n;i++){
        s.insert(min(pre[i-1],suf[i]));
        s.insert(max(pre[i-1],suf[i]));
    }
    for(int i=0;i<n;i++){
        if(s.count(a[i])) cout<<'1';
        else cout<<'0';
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
