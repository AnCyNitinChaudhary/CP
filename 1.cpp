#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
ll M = 1e9+7;
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vi>
#define vpii vector<pii>
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define setbits(n)  __builtin_popcountll(n)
#define bitsize(n) (63 - __builtin_clzll(n))
#define lcm(a,b) (a/__gcd(a, b)*b)

//Grinding CP to become specialist
//Use of knutth morris pratt algo in testing round 19 div 3 c1 and c2
void Nitin_Chaudhary(){
    int fail[400000];
	int n,i,j;
    string s;
	cin>>s;
	n=s.length();
	fail[0]=0;
	j=0;
	for(i=1;i<n;i++)
	{
		while(j>0&&s[i]!=s[j])j=fail[j-1];
		if(s[i]==s[j])j++;
		fail[i]=j;
	}
	if(fail[n-1]*2>n)
	{
		cout<<"YES"<<endl;
		for(i=0;i<fail[n-1];i++)cout<<s[i];
		cout<<endl;
	}
	else cout<<"NO"<<endl;
}

signed main(){
    fastIO;
    // ll t;
    // cin>>t;
    // while(t--){
       Nitin_Chaudhary();
    // }
    return 0;
}
