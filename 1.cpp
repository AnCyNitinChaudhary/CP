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

void Nitin_Chaudhary(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll count0=0;
    ll count1=0;
    for(ll i=0;i<n;i++){
        if(i==0){
            if(s[i]=='0')count0++;
            else count1++;
        }
        else{
            if(s[i]=='0'){
                if(s[i-1]!='0')count0++;
            }
            else count1++;
        }
    }
    // cout<<count0<<" "<<count1<<endl;
    if(count0>=count1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
