#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s1="",s2="",ans="";
    for(char &c:s){
        if(c<='9'&& c>='1'){
            s1+=c;
        }
    }
    sort(s1.begin(),s1.end());
    for(char &c:s1){
        s2=s2+c+'+';
    }
    for(int i=0;i<s2.length()-1;i++){
        ans+=s2[i];
    }
    cout<<ans;
}