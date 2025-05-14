#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long sum=0;
        int negative_count=0;
        int min_num = INT_MAX;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=abs(arr[i]);
            if(arr[i]<0){
                negative_count+=1;
            }
            min_num = min(min_num,abs(arr[i]));
        }
        if(negative_count%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-2*min_num<<endl;
        }
    }
}