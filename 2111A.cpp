#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x;
    cin>>x;
    int ct=0;
    int a=0,b=0,c=0;
    while(min(a,min(b,c))<x){
        if(a<=b && a<=c){
            a=2*min(b,c)+1;
        }
        else if(b<=a && b<=c){
            b=2*min(a,c)+1;
        }
        else{
            c=2*min(a,b)+1;
        }
        ct++;
    }
    cout<<ct<<"\n";
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