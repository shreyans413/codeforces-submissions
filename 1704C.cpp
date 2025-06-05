#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> a(m);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    vector<int> gaps;
    for(int i=0;i<m-1;i++){
        gaps.push_back(a[i+1]-a[i]-1);
    }
    gaps.push_back(n-a[m-1]+a[0]-1);
    sort(gaps.rbegin(),gaps.rend());
    int days=0,saved=0;
    for(auto gap:gaps){
        int curr=gap-2*days;
        if(curr>0){
            saved++;
            curr-=2;
            if(curr>0) saved+=curr;
            days+=2;
        }
    }
    cout<<n-saved<<"\n";
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