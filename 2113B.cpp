#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long w,h,a,b,x1,y1,x2,y2;
    cin>>w>>h>>a>>b>>x1>>y1>>x2>>y2;
    if(x1==x2){
        if(abs(y1-y2)%b==0) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
    if(y1==y2){
        if(abs(x1-x2)%a==0) cout<<"Yes\n";
        else cout<<"No\n";
        return;
    }
    if(abs(x1-x2)%a==0 || abs(y1-y2)%b==0) cout<<"Yes\n";
    else cout<<"No\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
