#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<-1<<"\n";
        return;
    }
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
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