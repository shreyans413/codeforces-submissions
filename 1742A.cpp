#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    vector<int> v(3);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    if(v[2]==v[0]+v[1]){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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