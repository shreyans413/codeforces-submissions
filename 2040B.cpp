#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    for(int ans=1,cur=1;;cur=cur*2+2,ans++){
        if(cur>=n){
            cout<<ans<<"\n";
            break;
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}