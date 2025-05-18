#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string s2;
    s2+=s[0];
    for(int i=0;i<n-1;i++){
        if(s[i+1]!=s[i]){
            s2+=s[i+1];
        }
    }
    cout<<n-s2.length();
}