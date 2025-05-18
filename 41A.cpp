#include<bits/stdc++.h>
using namespace std;

int  main(){
    string s,t;
    cin>>s>>t;  
    int i=0;
    int n=s.length();
    if(n!=t.length()){
        cout<<"NO";
        return 0;
    }
    while(i<n){
        if(s[i]!=t[n-i-1]){
            cout<<"NO";
            return 0;
        }
        i++;
    }
    cout<<"YES";
    return 0;
}

// can also use reverse(s.begin(),s.end()) logic.