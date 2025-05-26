#include<bits/stdc++.h>
using namespace std;

bool beats(int x,int y,int n){
    if(x==1) return y==n;
    if(x==n) return y!=1;
    return x>y;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a.push_back(i+1);
        }
        else b.push_back(i+1);
    }
    bool aliceWins=false;
    for(auto x:a){
        bool canBeatAll=true;
        for(auto y:b){
            if(!beats(x,y,n)){
                canBeatAll=false;
                break;
            }
        }
        if(canBeatAll){
            aliceWins=true;
            break;
        }
    }
    if(aliceWins){
        cout<<"Alice\n";
        return;
    }
    cout<<"Bob\n";
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