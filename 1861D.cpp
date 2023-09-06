#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define V vector<long long int>
#define pb push_back
#define pi pair<long long int,long long int>
#define forl(var,str,end) for(long long int var=str; var<end; var++)
ll mod = 1e9+7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	V a(n);
    	forl(i,0,n)
    	cin>>a[i];
    	if(n==1){
    		cout<<"0\n";
    		continue;
		}
    	V pre(n);
    	V suff(n);
    	pre[0] = 0;
    	pre[1] = 0;
    	for(ll i=2; i<n; i++){
    		if(a[i-1]>=a[i-2])
    		pre[i] = 1+pre[i-1];
    		else
    		pre[i] = pre[i-1];
		}
		suff[n-1] = 0;
		for(ll i=n-2; i>=0; i--){
			if(a[i]>=a[i+1])
			suff[i] = 1+suff[i+1];
			else
			suff[i] = suff[i+1];
		}
		ll ans = 1e9;
		for(ll i=0; i<n; i++){
			ll sol = (i!=0)?1:0;
			sol += pre[i]+suff[i];
			ans = min(ans,sol);
		}
		cout<<ans<<"\n";
    }
    return 0;
}


