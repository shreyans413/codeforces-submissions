#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int zeroes=0,ones=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0') zeroes++;
        else ones++;
    }
    int ct=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0' && ones>0){
            ones--,ct++;
        }
        else if(s[i]=='1' && zeroes>0){
            zeroes--,ct++;
        }
        else break;
    }
    cout<<s.length()-ct<<"\n";
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