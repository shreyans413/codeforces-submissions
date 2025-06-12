#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> p(n),d(n);
    for(auto &x:p) cin>>x;
    for(auto &x:d) cin>>x;
    int total=n*k*2;
    vector<int> next(total);
    auto state_to_int=[&](int i,int t,int dir){
        return i*k*2+t*2+dir;
    };
    for(int i=0;i<n;i++){
        for(int t=0;t<k;t++){
            for(int dir=0;dir<2;dir++){
                int u=state_to_int(i,t,dir);
                int final=dir;
                if(t==d[i]){
                    final=1-dir;
                }
                if(final==1){
                    int next_i=i+1;
                    if (next_i>=n){
                        next[u] = -1;
                    } 
                    else{
                        long long dist=p[next_i]-p[i];
                        long long next_t=(t+dist)%k;
                        next[u]=state_to_int(next_i,(int)next_t,1);
                    }
                }
                else{ 
                    int next_i=i-1;
                    if(next_i<0){
                        next[u]=-1; 
                    } 
                    else {
                        long long dist=p[i]-p[next_i];
                        long long next_t=(t+dist)%k;
                        next[u]=state_to_int(next_i,(int)next_t,0);
                    }
                }
            }
        }
    }
    vector<int> isSafe(total, -1);
    function<int(int)> check=[&](int u)->int{
        if(u == -1) return 1; 
        if(isSafe[u]!=-1) return isSafe[u];
        isSafe[u]=0; 
        isSafe[u]=check(next[u]);
        return isSafe[u];
    };
    for(int i=0;i<total;i++){
        if(isSafe[i]==-1) check(i);
    }
    int q;
    cin>>q;
    while(q--){
        long long s;
        cin>>s;
        auto it=lower_bound(p.begin(),p.end(),s);
        if(it==p.end()){
            cout<<"YES\n";
            continue;
        }
        int i=distance(p.begin(),it);
        long long t1=(p[i]-s)%k;
        int original = state_to_int(i,(int)t1,1);
        if(isSafe[original]==1){
            cout<<"YES\n";
        } 
        else{
            cout<<"NO\n";
        }
    }
    return;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}