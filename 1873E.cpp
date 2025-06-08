#include<bits/stdc++.h>
using namespace std;

bool check(long long mid,vector<int> &heights,int x){
    long long w = 0;
    int n = heights.size();
    for(int i=0;i<n;i++){
        if(heights[i]<mid){
            w+=mid-heights[i];
        }
    }
    return w<=x;
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> heights(n);
    for(auto &x:heights) cin>>x;
    long long s=0,e=1e12,ans=-1;
    while(s<=e){
        long long mid = s+(e-s)/2;
        if(check(mid,heights,x)){
            ans=mid;
            s=mid+1;
        }
        else e=mid-1;
    }
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}