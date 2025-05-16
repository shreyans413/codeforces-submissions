#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ct=0;
    int bills[] = {100,20,10,5,1};
    for(int i=0;i<5;i++){
        ct+=n/bills[i];
        n%=bills[i];
    }
    cout<<ct;
}