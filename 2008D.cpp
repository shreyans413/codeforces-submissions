#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> p(n+1,0),ans(n+1,0);
        vector<int> vis(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>p[i];
        }
        string s;
        cin>>s;
        for(int i=1;i<=n;i++){
            if(vis[i]) continue;
            int sz=0;
            while(!vis[i]){
                vis[i]=1;
                sz+=s[i-1]=='0';
                i=p[i];
            }
            while(vis[i]!=2){
                ans[i]=sz;
                vis[i]=2;
                i=p[i];
            }
        }  
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}