#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> nums = {a,b,c};
        sort(nums.begin(),nums.end());
        cout<<nums[1]<<endl;
    }
    return 0;
}