#include<bits/stdc++.h>
using namespace std;

vector<int> indices(vector<int> arr){
    vector<pair<int,int>> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[i].first=arr[i];
        temp[i].second=i;
    }
    sort(temp.rbegin(),temp.rend());
    vector<int> ans;
    for(int i=0;i<3;i++){
        ans.push_back(temp[i].second);
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(auto &x:a) cin>>x;
    for(auto &x:b) cin>>x;
    for(auto &x:c) cin>>x;
    vector<int> a1=indices(a);
    vector<int> b1=indices(b);
    vector<int> c1=indices(c);
    int mx=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if(a1[i]==b1[j] || b1[j]==c1[k] || c1[k]==a1[i]){
                    continue;
                }
                mx=max(a[a1[i]]+b[b1[j]]+c[c1[k]],mx);
            }
        }
    }
    cout<<mx<<"\n";
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