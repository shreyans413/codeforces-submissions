#include<bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int lcs=0;
    int n=a.length();
    int m=b.length();
    for(int len=0;len<=min(n,m);len++){
        for(int i=0;i+len<=n;i++){
            for(int j=0;j+len<=m;j++){
                string extract_a=a.substr(i,len);
                string extract_b=b.substr(j,len);
                if(extract_a==extract_b){
                    lcs=max(lcs,len);
                }
            }
        }
    }
    cout<<n+m-2*lcs<<"\n";
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