#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long mx=0,mx2=0;
    long long sum=0;
    for(long long i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
        sum+=(mx-a[i]);
        mx2=max(mx2,mx-a[i]);
    }
    cout<<sum+mx2<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--) solve();
    return 0;
}