#include <bits/stdc++.h>
using namespace std;

bool check(long long k,long long a,long long b,long long x,long long y,long long mid){
    if(mid==0) return true;
    if(a<b){
        swap(a,b);
        swap(x,y);
    }
    long long mx=0;
    if(k >= a) mx=min(mid,(k-a)/x+1);
    long long mn=0;
    if(x==y) return k-mid*x>=b;
    if(y>x){
        long long num=b-k+mid*y-y;
        long long den=y-x;
        if(num>0) mn=(num+den-1)/den;
    } 
    else {
        long long num=k-b+y-mid*y;
        long long den=x-y;
        if(num<0) return false;
        mx=min(mx,num/den);
    }
    return mn<=mx;
}

void solve(){
    long long k,a,b,x,y;
    cin>>k>>a>>b>>x>>y;
    long long ans=0;
    long long temp=k, cntA=0, cntB=0;
    if(temp>=a){
        cntA=(temp-a)/x+1;
        temp-=cntA*x;
    }
    if(temp>=b){
        cntB=(temp-b)/y+1;
    }
    ans=max(ans, cntA+cntB);
    temp=k; cntA=0; cntB=0;
    if(temp>=b){
        cntB=(temp-b)/y+1;
        temp-=cntB*y;
    }
    if(temp>=a){
        cntA=(temp-a)/x+1;
    }
    ans=max(ans, cntA+cntB);
    long long l=0,r=k+1;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(check(k,a,b,x,y,mid)){
            ans=max(ans,mid);
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
