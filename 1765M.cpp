#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a=n/i;
            break;
        }
    }
    cout<<a<<" "<<n-a<<"\n";
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