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
    	ll one = 0;
    	ll three = 0;
    	forl(i,0,s.size()){
    		if(s[i]=='1')
    		one = i;
    		else if(s[i]=='3')
    		three = i;
		}
		if(one>three)
		cout<<"31\n";
		else
		cout<<"13\n";
    }
    return 0;
}


