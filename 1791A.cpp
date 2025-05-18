#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_set<char> codeforces={'c','o','d','e','f','r','s'};
    while(t--){
        char c;
        cin>>c;
        if(codeforces.count(c)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}