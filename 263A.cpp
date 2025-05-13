#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> nums(5);
    int ans;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int n;
            cin>>n;
            if(n==1){
                ans = abs(3-i)+abs(3-j);
            }
            nums[i-1].push_back(n);
        }
    }
    cout<<ans;
    return 0;
}