#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;
    cin>>m;
    vector<vector<int>> a(m,vector<int>());
    const int MAX = 50000;
    int last[MAX+100];
    for(int day=0;day<m;day++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            a[day].resize(n);
            cin>>a[day][i];
            last[a[day][i]]=day;
        }
    }
    vector<int> ans(m,-1);
    bool failed=false;
    for(int day=0;day<m;day++){
        for(auto x:a[day]){
            if(last[x]==day){
                ans[day]=x;
                break;
            }
        }
        if(ans[day]==-1){
            failed=true;
            cout<<-1<<"\n";
            return;
        }
    }
    if(!failed){
        for(auto &x:ans){
            cout<<x<<" ";
        }
    }
    cout<<"\n";
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