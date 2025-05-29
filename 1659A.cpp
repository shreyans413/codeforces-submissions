#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    int p=r/(b+1);
    int q=r%(b+1);
    for(int i=0;i<q;i++){
        cout<<string(p+1,'R')<<'B';
    }
    for(int i=q;i<b;i++){
        cout<<string(p,'R')<<'B';
    }
    cout<<string(p,'R')<<"\n";
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