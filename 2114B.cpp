#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ones=0;
    int zeroes = 0;
    for(int i=0;i<n;i++){
        if (s[i]=='1') ones++;
        else zeroes++;
    }
    if(ones==zeroes && k%2!=0){
        cout<<"NO\n";
        return;
    } 
    while(k--){
        if(ones>zeroes){
            ones-=2;
        }
        else zeroes-=2;
    }
    if(ones!=zeroes){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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