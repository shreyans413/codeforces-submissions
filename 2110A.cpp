#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(auto &x:v) cin>>x;
        sort(v.begin(),v.end());
        vector<int> v2=v;
        reverse(v2.begin(),v2.end());
        int ct=0,ct2=0;
        int mn = *min_element(v.begin(),v.end());
        int mx = *max_element(v.begin(),v.end());
        int mn2 = *min_element(v2.begin(),v2.end());
        int mx2 = *max_element(v2.begin(),v2.end());
        while((mn+mx)%2!=0){
            v.pop_back();
            mn = *min_element(v.begin(),v.end());
            mx = *max_element(v.begin(),v.end());
            ct++;
        }
        while((mn2+mx2)%2!=0){
            v2.pop_back();
            mn2 = *min_element(v2.begin(),v2.end());
            mx2 = *max_element(v2.begin(),v2.end());
            ct2++;
        }
        cout<<min(ct,ct2)<<"\n";
    }
}