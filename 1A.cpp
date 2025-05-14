#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long int left = (n+a-1)/a;
    long long int right = (m+a-1)/a;
    cout<<left*right;
}