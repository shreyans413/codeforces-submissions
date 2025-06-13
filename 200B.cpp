#include<bits/stdc++.h>
using namespace std;

int main(){
    float n;
    cin>>n;
    float sum;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        sum+=p;
    }
    cout<<sum/n;
}