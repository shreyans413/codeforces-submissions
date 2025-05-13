#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int xsum=0,ysum=0,zsum=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum==0 && ysum==0 && zsum==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}