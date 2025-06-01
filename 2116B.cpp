#include<bits/stdc++.h>
using namespace std;
 
const int N = 998244353;
const int W = 1e5;
int s[W]={};
 
void solve(){
    int n;
    cin>>n;
    vector<int> p(n),q(n),r(n);
    for(auto &x:p) cin>>x;
    for(auto &x:q) cin>>x;
    for(int i=0,j=0,k=0;k<n;k++){
        if(p[k]>p[i]) i=k;
        if(q[k]>q[j]) j=k;
        if(p[i]!=q[j]){
            if(p[i]>q[j]){
                cout<<(s[p[i]]+s[q[k-i]])%N<<" ";
            }
            else{
                cout<<(s[q[j]]+s[p[k-j]])%N<<" ";
            }
        }
        else{
            cout<<(s[p[i]]+s[max(q[k-i],p[k-j])])%N<<" ";
        }
    }
    cout<<"\n";
}
 
int main(){
    ios::sync_with_stdio(0);
    s[0]=1;
    for(int i=1;i<W;i++){
        s[i]=s[i-1]*2%N;
    }
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}