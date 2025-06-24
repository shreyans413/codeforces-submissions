#include <bits/stdc++.h>
using namespace std;

#define MAXN 400001
int l[MAXN],r[MAXN],sum[MAXN],cnt[MAXN];

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n;i++) sum[i]=cnt[i]=0;
    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
        if(l[i]==r[i]){
            sum[l[i]]=1;
            cnt[l[i]]++;
        }
    }
    for(int i=2;i<=2*n;i++) sum[i]+=sum[i-1];
    for(int i=1;i<=n;i++){
        if(l[i]==r[i]){
            if(cnt[l[i]]<=1) cout<<1;
            else cout<<0;
        }else{
            if(sum[r[i]]-sum[l[i]-1]<r[i]-l[i]+1) cout<<1;
            else cout<<0;
        }
    }
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--) solve();
}
