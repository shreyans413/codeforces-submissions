#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int mn=INT_MAX;
    int even=0;
    for(int i=0;i<n;i++){
        if(a[i]%k==0){
            cout<<0<<"\n";
            return;
        } 
        if(a[i]%2==0){
            even++;
        }
        mn=min(mn,k-(a[i]%k));
    }
    if(k==4){
        if(even==1){
            cout<<1<<"\n";
            return;
        }
        if(even==0){
            cout<<min(mn,2)<<"\n";
            return;
        }
        if(even>=2){
            cout<<0<<"\n";
            return;
        }
    }
    cout<<mn<<"\n";
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