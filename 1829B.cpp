#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ct=0;
        int mx = 0;
        for(int &x : arr){
            cin>>x;
            if(x==0){
                ct++;
                mx = max(ct,mx);
            }
            else{
                ct=0;
            }
        }
        cout<<mx<<endl;
    }
}