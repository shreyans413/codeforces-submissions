#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s1 = "codeforces";
    while(t--){
        int ct=0;
        string s;
        cin>>s;
        for(int i=0;i<10;i++){
            if(s[i]!=s1[i]) ct++;
        }
        cout<<ct<<endl;
    }
}