#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(auto &x:a) cin>>x;
        long long sum = accumulate(a.begin(),a.end(),0LL);
        sort(a.begin(),a.end());
        a[n-1]--;
        sort(a.begin(),a.end());
        if(a[n-1]-a[0]>k || sum%2==0){
            cout<<"Jerry\n";
            continue;
        }
        cout<<"Tom\n";
    }
}