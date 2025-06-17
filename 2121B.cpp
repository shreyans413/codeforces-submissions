#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(auto c:s) {
        freq[c-'a']++;
    }
    for(int i=1;i<n-1;i++){
        if(freq[s[i]-'a']>1){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}