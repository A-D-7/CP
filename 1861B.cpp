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
    	string a,b;
    	cin>>a>>b;
    	bool flag = false;
    	forl(i,0,a.length()){
    		if(i==a.length()-1)
    		break;
    		if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1] == '1'){
    			flag = true;
    			break;
			}
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
    }
    return 0;
}


