#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(auto &x:a) cin>>x;
    long long denom=(long long)n*n-1;
    long long numx=(long long)n*a[n-1]-a[0];
    long long numy=(long long)n*a[0]-a[n-1];
    if(numx%denom!=0 || numy%denom!=0){
        cout<< "NO\n";
        return;
    }
    long long x=numx/denom;
    long long y=numy/denom;
    if(x<0 || y<0){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++){
        long long r=(long long)(i + 1)*x + (long long)(n-i)*y;
        if(r!=a[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
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