#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> ans(n,x);
    int cur=0,ok=1;
    for(int i=0;i<n-1;i++){
        if(((cur|i)&x)==(cur|i)){
            cur|=i;
            ans[i]=i;
        }
        else{
            ok=0;
            break;
        }
    }
    if(ok && (cur|(n-1))==x) ans[n-1]=n-1;
    for(auto v:ans) cout<<v<<" ";
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
