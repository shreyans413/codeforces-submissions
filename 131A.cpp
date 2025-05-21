#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool found = true;
    for(int i=1;i<s.length();i++){
        if(!isupper(s[i])){
            found = false;
            break;
        }
    }
    if(s.length()==1) found=true;
    if(found){
        for(char &c:s){
            if(c==s[0]){
                if(islower(c)){
                    c=toupper(c);
                    continue;
                }
            }
            c=tolower(c);
        }
    }
    cout<<s;
}