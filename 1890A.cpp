#include<bits/stdc++.h>
using namespace std;
//b1+b2=b2+b3=b3+b4=b4+b5=bn-2+bn-1=bn-1+bn
//b1=b3=b5,b2=b4=b6,
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        m[a[i]]++;
    }
    if(m.size()>=3){
        cout<<"No\n";
        return;
    }
    if(abs(m.begin()->second-m.rbegin()->second)<=1){
        cout<<"Yes\n";
        return;
    }
    cout<<"No\n";
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