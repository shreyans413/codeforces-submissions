#include<bits/stdc++.h>
using namespace std;
// difference between 2 elements must be atleast2
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int ct=0;
    for(auto &x:a) cin>>x;
    int i=0;
    while(i<a.size()-1){
        if(a[i+1]-a[i]<2){
            a.erase(a.begin()+i+1);
        }
        else i++;
    }
    cout<<a.size()<<"\n";
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