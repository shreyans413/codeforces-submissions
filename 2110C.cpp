#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
    cin>>n;
	vector<int> d(n);
	for(auto &x:d) cin>>x;
	vector<int> l(n),r(n);
	for(int i=0;i<n;i++) cin>>l[i]>>r[i];
	int sum=0;
	vector<int> stk;
	for(int i=0;i<n;i++){
		if(d[i]==-1) stk.push_back(i);
		else sum+=d[i];
		while(sum<l[i]){
			if(stk.empty()){
                cout<<-1<<"\n"; 
                return; 
            }
			d[stk.back()]=1;
			sum++;
			stk.pop_back();
		}
		while(sum+(int)stk.size()>r[i]){
			if(stk.empty()){
                cout<<-1<<"\n"; 
                return; 
            }
			d[stk.back()]=0;
			stk.pop_back();
		}
	}
	for(auto x:d) cout<<max(0,x)<<" ";
	cout<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}
