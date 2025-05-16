#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(upper>lower){
        for(char &c: s){
            c=toupper(c);
        }
        cout<<s;
    }
    else{
        for(char &c: s){
            c=tolower(c);
        }
        cout<<s;
    }

}