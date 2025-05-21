#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        vector<int> b(n*n);
        for(auto &x:b) cin>>x;
        sort(b.begin(),b.end());
        int a11 = b[0];
        vector<int> expected;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                expected.push_back(a11+i*c+j*d);
            }
        }
        sort(expected.begin(),expected.end());
        if(b==expected) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}