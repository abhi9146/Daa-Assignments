#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
	ll n,q;
	cin>>n>>q;
	vector<ll>arr(n);
	vector<ll>pre(n,0);
	for(int i=0;i<n;i++){
		cin>>arr[i];
		pre[i]=arr[i];
		if(i!=0){
			pre[i]=pre[i-1]+arr[i];
		}
		
	} 
	ll total=pre[n-1];
	//cout<<total<<" ";
	while(q--){
		ll a,b,k;
		cin>>a>>b>>k;
		a--;b--;
		ll remove=pre[b];
		if(a!=0) remove-=pre[a-1];
		
		//cout<<total<<" ";
		ll rem_sum=total-remove;
		//cout<<rem_sum<<" ";
		rem_sum+=(k*(b-a+1));
		//cout<<rem_sum<<endl;
		if(rem_sum%2){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	

}
int main(){
   int t;cin>>t;
   while(t--) solve();
}

