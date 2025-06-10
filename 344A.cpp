#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    string num="";
    for(int i=0;i<s.length();){
        if(s[i]=='.'){
            num+='0';
            i++;
        }
        else{
            if(s[i+1]=='.') num+='1';
            else num+='2';
            i+=2;
        }
    }
    cout<<num<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}