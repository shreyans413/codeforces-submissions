#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x,l=-1,r=-1;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1){
            if(l==-1) l=i;
            r=i;
        }
    }
    int ans=r-l+1;   
    if(ans<=x) cout<<"YES\n";
    else cout<<"NO\n";
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