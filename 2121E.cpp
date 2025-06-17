#include<bits/stdc++.h>
using namespace std;

int memo[10][2][2];
string sl,sr;

int f(int i,bool tl,bool tr){
    if(i==sl.size()) return 0;
    if(memo[i][tl][tr]!=-1) return memo[i][tl][tr];
    int ans=1e9,lo,hi;
    if(tl) lo=sl[i]-'0';
    else lo=0;
    if(tr) hi=sr[i]-'0';
    else hi=9;
    for(int d=lo;d<=hi;d++){
        int cost=0;
        if(d==(sl[i]-'0')) cost++;
        if(d==(sr[i]-'0')) cost++;
        bool ntl, ntr;
        if(tl && d==lo) ntl=1;
        else ntl=0;
        if(tr && d==hi) ntr=1;
        else ntr=0;
        ans=min(ans,cost+f(i+1,ntl,ntr));
    }
    return memo[i][tl][tr]=ans;
}

void solve(){
    long long l,r;
    cin>>l>>r;
    sl=to_string(l);
    sr=to_string(r);
    memset(memo,-1,sizeof(memo));
    cout<<f(0,1,1)<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}