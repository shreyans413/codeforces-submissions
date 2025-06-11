#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mx=INT_MIN, mn=INT_MAX;
    int amazing=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>mx || x<mn) amazing++;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<amazing-1;
}