#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll f(vector<int>& sub,ll s,int x){
    if(sub.empty()) return 0;
    int n=sub.size();
    vector<ll> p(n+1,0);
    for(int i=0;i<n;i++) p[i+1]=p[i]+sub[i];
    map<ll,int> freq;
    ll cnt=0;
    int last=-1,l=0;
    for(int r=0;r<n;r++){
        if(sub[r]==x) last=r;
        if(last==-1) continue;
        while(l<=last){
            freq[p[l]]++;
            l++;
        }
        ll target=p[r+1]-s;
        if(freq.count(target)) cnt+=freq[target];
    }
    return cnt;
}

void solve(){
    int n,x;
    ll s;
    cin>>n>>s>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=0;
    int st=0;
    for(int i=0;i<n;i++){
        if(a[i]>x){
            vector<int> sub(a.begin()+st,a.begin()+i);
            ans+=f(sub,s,x);
            st=i+1;
        }
    }
    vector<int> sub(a.begin()+st,a.end());
    ans+=f(sub,s,x);
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
}
