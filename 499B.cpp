#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> v;
    while(m--){
        pair<string,string> p;
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    while(n--){
        string s;
        cin>>s;
        for(auto &p1:v){
            if(s==p1.first || s==p1.second){
                if(p1.first.length()>p1.second.length()){
                    cout<<p1.second<<" ";
                }
                else{
                    cout<<p1.first<<" ";
                }
            }
        }
    }
}