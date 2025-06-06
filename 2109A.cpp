#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        int ct=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==0) ct++;
            if(a[i]==0 && a[i+1]==0){
                cout<<"YES\n";
                return;
            }
        }
        if(a[n-1]==0) ct++;
        if(ct==0){
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}