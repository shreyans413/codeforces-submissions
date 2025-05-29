#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int ct=0;
    vector<pair<int,int>> v;
    v.push_back({0,0});
    for(int i=1;i<s.length();i++){
        if(s[i-1]=='(') ct++;
        else ct--;
        v.push_back({i,ct});
    }
    sort(v.begin(),v.end(),[](const pair<int,int>& a,const pair<int,int>& b){
        if(a.second==b.second) return a.first>b.first;
        return a.second<b.second;
    });
    for(auto &x:v){
        cout<<s[x.first];
    }
    return 0;
}