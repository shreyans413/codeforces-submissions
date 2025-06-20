#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int sm=0,twos=0,threes=0;
    for(char c:s){
        int d=c-'0';
        sm+=d;
        if(d==2) twos++;
        if(d==3) threes++;
    }
    for(int i=0;i<=min(9LL,1LL*twos);i++){
        for(int j=0;j<=min(9LL,1LL*threes);j++){
            if((sm+2*i+6*j)%9==0){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
