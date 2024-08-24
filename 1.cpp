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
void Nitin_Chaudhary(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>cont;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll sr,sc,er,ec;
            sr=max(0LL,i-k+1);
            er=min(i,n-k);
            sc=max(0LL,j-k+1);
            ec=min(j,m-k);
            ll val=(er-sr+1)*(ec-sc+1);
            // cout<<val<<endl;
            cont.push_back(val);

        }
    }
    sort(cont.begin(),cont.end(),greater<int>());
    ll w;
    cin>>w;
    vector<ll>a(w);
    for(ll i=0;i<w;i++)cin>>a[i];
    sort(a.begin(),a.end(),greater<int>());
    ll ans=0;
    for(int i=0;i<w;i++)ans+=a[i]*cont[i];
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
