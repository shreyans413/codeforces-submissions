#include<bits/stdc++.h>
using namespace std;
using ll=long long;

const int N=6e6;
vector<int> pr;

void solve(){
	int n;
    cin>>n;
	vector<int> a(n);
	for(auto &x:a) cin>>x;
	sort(a.rbegin(),a.rend());
	int ans=0;
	ll sa=0,sp=0;
	for(int i=0;i<n;i++){
		sa+=a[i];
		sp+=pr[i];
		if(sa>=sp) ans=i+1;
	}
	cout<<n-ans<<"\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	vector<int> isp(N,1);
	for(int i=2;i<N;i++){
		if(!isp[i]) continue;
		pr.push_back(i);
		for(int j=i;j<N;j+=i) isp[j]=0;
	}
	int t;
    cin>>t;
	while(t--) solve();
	return 0;
}
