#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    long long odds = (n+1)/2;
    if(k<=odds){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-odds);
    }
    return 0;
}