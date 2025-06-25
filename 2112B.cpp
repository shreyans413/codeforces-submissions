#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    if(n<2){
        cout<<"-1\n";
        return;
    }
    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1])<=1){
            cout<<"0\n";
            return;
        }
    }
    int ans=-1;
    for(int i=0;i<n-1;i++){
        int mn=min(a[i],a[i+1]),mx=max(a[i],a[i+1]);
        if(i>0){
            int l=a[i-1];
            if(max(mn,l-1)<=min(mx,l+1)){
                ans=1;
                break;
            }
        }
        if(i<n-2){
            int r=a[i+2];
            if(max(mn,r-1)<=min(mx,r+1)){
                ans=1;
                break;
            }
        }
    }
    if(ans!=-1){
        cout<<"1\n";
        return;
    }
    if(n>2){
        for(int i=0;i<n-1;i++){
            int min_l=a[0],max_l=a[0];
            for(int k=1;k<=i;k++){
                min_l=min(min_l,a[k]);
                max_l=max(max_l,a[k]);
            }
            int min_r=a[i+1],max_r=a[i+1];
            for(int k=i+2;k<n;k++){
                min_r=min(min_r,a[k]);
                max_r=max(max_r,a[k]);
            }
            if(max(min_l,min_r)<=min(max_l,max_r)+1){
                ans=n-2;
                break;
            }
        }
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
