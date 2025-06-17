#include<bits/stdc++.h>
using namespace std;

const int N = 1e9;

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    set<int> st;
    st.insert(s);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    vector<int> target(st.begin(),st.end());
    int m=target.size();
    int start=-1;
    for(int i=0;i<m;i++){
        if(target[i]==s){
            start=i;
            break;
        }
    }
    vector<vector<int>> dp(1<<m,vector<int>(m,N));
    dp[1<<start][start]=0;
    for(int j=1;j<(1<<m);j++){
        for(int i=0;i<m;i++){
            if((j>>i)&1){
                if(dp[j][i]==N) continue;
                for(int k=0;k<m;k++){
                    if(!((j>>k)&1)){
                        int next = j | (1<<k);
                        int cost=abs(target[i]-target[k]);
                        dp[next][k]=min(dp[next][k],dp[j][i]+cost);
                    }
                }
            }
        }
    }
    int final=(1<<m)-1;
    int mn=N;
    for(int i=0;i<m;i++){
        mn=min(mn,dp[final][i]);
    }
    cout<<mn<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}