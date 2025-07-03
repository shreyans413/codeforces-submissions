#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
    cin>>n;
	vector<bool> vis(n+1,0);
	vector<int> res(n+1);
	for(int i=2;i<=n;i++){
		if(vis[i]) continue;
		vector<int> cyc;
		for(int j=i;j<=n;j+=i){
			if(!vis[j]){
				cyc.push_back(j);
				vis[j]=1;
			}
		}
		for(int j=0;j<cyc.size();j++){
			res[cyc[j]]=cyc[(j+1)%cyc.size()];
        }
	}
	res[1]=1;
	for(int i=1;i<=n;i++){
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
	while(t--) solve();
}
