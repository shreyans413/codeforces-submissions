#include<bits/stdc++.h>
using namespace std;

long long nextPrime(long long n){
    for(long long i=n;;i++){
        bool isPrime=true;
        for(long long j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime) return i;
    }
}

void solve(){
    long long d;
    cin>>d;
    long long p = nextPrime(d+1);
    long long q = nextPrime(p+d);
    cout<<min(1LL*p*p*p,1LL*p*q)<<"\n";
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