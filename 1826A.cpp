#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n);
        for(auto &i:l) cin>>i;
        int answer=-1;
        for(int x=0;x<n;x++){
            int liars = 0;
            for(int i=0;i<n;i++){
                if(l[i]>x) liars++;
            }
            if(liars==x){
                answer = liars;
                break;
            }
        }
        cout<<answer<<"\n";
    }
}