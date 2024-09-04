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

//Doing CP because Coding is My Love.
void Nitin_Chaudhary(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    int fre[26]={0};
    ll ans=0;
    for(auto i:s){
        fre[(i-'A')]++;
        // cout<<i-'A'<<" ";
    }
    for(int i=0;i<n;i++){
        // cout<<i<<" ";
        if(fre[i]>=i+1)ans++;
    }
    // cout<<endl;
    cout<<ans<<endl;
}

signed main(){
    fastIO;
    ll t;
    cin>>t;
    while(t--){
       Nitin_Chaudhary();
    }
    return 0;
}
