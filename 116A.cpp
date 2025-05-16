#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int ans=INT_MIN;
    for(int i=1;i<=n;i++){
        int a,b;
        cin>>a>>b;
        sum+=(b-a);
        ans=max(sum,ans);
    }
    cout<<ans;
    return 0;
}