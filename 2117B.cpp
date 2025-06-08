#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"1\n";
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