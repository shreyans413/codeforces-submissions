#include<bits/stdc++.h>
using namespace std;

string s;
long long n;

bool check(long long i){
    if(i<0 || i>=n-3) return false;
    if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0') return true;
    return false;
}

void solve(){
    cin>>s;
    long long q;
    cin>>q;
    long long count = 0;
    n = s.length();
    for(long long i=0;i<n;i++){
        if(check(i)) count++;
    }
    while(q--){
        long long i,v;
        cin>>i>>v;
        i--;
        if(s[i]!=v+'0'){
            bool before = check(i-3) || check(i-2) || check(i-1) || check(i);
            s[i]=v+'0';
            bool after = check(i-3) || check(i-2) || check(i-1) || check(i);
            count+=(after-before);
        }
        if(count){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin>>t;
    while(t--) solve();
    return 0;
}