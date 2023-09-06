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
    	string s;
    	cin>>s;
    	bool flag = true;
    	V v;
    	v.push_back(1);
    	for(ll i=0; i<s.size(); i++){
    		if(s[i]=='+'){
    			if(v.back()==-1)
    			v.pb(-1);
    			else
    			v.pb(0);
			}
			else if(s[i]=='-'){
				if(v.back()==1)
				{
					v.pop_back();
					v.back() = 1;
				}
				else
				v.pop_back();
			}
			else if(s[i]=='1'){
				if(v.size()<=2)
				continue;
				if(v.back()==-1){
					flag = false;
					break;
				}
				else
				v.back()=1;
			}
			else{
				if(v.size()<=2){
					flag = false;
					break;
				}
				if(v.back()==1){
					flag = false;
					break;
				}
				else
				v.back()=-1;
			}
		}
		if(flag)
		cout<<"YES\n";
		else
		cout<<"NO\n";
    }
    return 0;
}


