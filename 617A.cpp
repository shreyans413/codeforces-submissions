#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    int ct=0;
    int steps[] = {5,4,3,2,1};
    for(int i=0;i<5;i++){
        ct+=x/steps[i];
        x%=steps[i];
    }
    cout<<ct;
    return 0;
}