#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = sqrt(n);
    if(ans*ans==n){
        cout<<0<<" "<<ans<<"\n";
        return;
    } 
    cout<<-1<<"\n";
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