#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int &x: v) cin>>x;
    int count=0;
    sort(v.begin(),v.end());
    int min = v[0];
    int max = v[n-1];

    for(int x: v){
        if(x<max && x>min) count++;
    }
    cout<<count;
}