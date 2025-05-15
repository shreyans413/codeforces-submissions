#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    unordered_set<char> ch;
    cin>>s;
    for(char a: s){
        ch.insert(a);
    }
    if(ch.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    return 0;
}