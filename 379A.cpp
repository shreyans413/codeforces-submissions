#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int burnt = 0;
    int hours = 0;
    while(a--){
        hours+=1;
        burnt+=1;
        if(burnt==b){
            a+=1;
            burnt-=b;
        }
    }
    cout<<hours;
}