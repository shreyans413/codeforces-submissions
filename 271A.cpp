#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    for(int i=y+1;i<=9012;i++){
        unordered_set<int> digits;
        int temp=i;
        while(temp!=0){
            digits.insert(temp%10);
            temp/=10;
        }
        if(digits.size()==4){
            cout<<i;
            break;
        }
    }
    return 0;
}