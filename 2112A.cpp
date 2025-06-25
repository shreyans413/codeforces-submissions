#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,x,y;
    cin>>a>>x>>y;
    int dist_ax=abs(a-x),dist_ay=abs(a-y);
    int lx=x-dist_ax,hx=x+dist_ax;
    int ly=y-dist_ay,hy=y+dist_ay;
    int L=max(lx,ly),H=min(hx,hy);
    int cnt=H-L-1;
    if(cnt<=0) cout<<"NO\n";
    else if(cnt==1){
        int win=L+1;
        if(win==a) cout<<"NO\n";
        else cout<<"YES\n";
    }
    else cout<<"YES\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
