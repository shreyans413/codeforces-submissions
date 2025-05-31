#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    long long mn=INT_MAX;
    for(long long add = 0;add<32;add++){
        long long op=add;
        long long new_b=b+add;
        long long new_a=a;
        if(new_b==1){
            continue;
        }
        while(new_a>0){
            new_a/=new_b;
            op++;
        }
        mn=min(mn,op);
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