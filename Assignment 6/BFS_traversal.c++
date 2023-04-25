#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n;cin>>n;
	vector<ll>a(n),b(n);
	
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cin>>b[i];
	
	ll i=0;
	for(i=0;i<n;i++){
		if(a[i]!=b[i]) break;
	}
	ll j=i;
	while(i>0 and b[i]>=b[i-1]) i--;
	while(j<n-1 and b[j]<=b[j+1]) j++;
	
	//if(i==0) and a[0]<=a[1] 
	ll len=j-i;
	cout<<i+1<<" "<<j+1<<endl;
}
int main(){
   int t;cin>>t;
   while(t--) solve();
}

