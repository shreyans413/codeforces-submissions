#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n),pre(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    pre[0]=a[0];
    for(long long i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    long long ans = INT_MIN;
    for(long long first=0;first<=k;first++){
        long long second=k-first;
        long long left=2*first;
        long long right=n-second-1;
        long long sum = pre[right]-(left==0 ? 0:pre[left-1]);
        ans = max(ans,sum);
    }
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}