#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define endl '\n'
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll M = 1e9+7;
#define int_max 1e18
#define int_min -1e18
#define vi vector<int>
#define vll vector<ll>
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define ld long double
#define memset(arr,val) memset(arr,val,sizeof(arr))
#define INF INT64_MAX
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define umap unordered_map
#define mii map<int, int>
#define pii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vvi vector<vi>
#define vpii vector<pii>
#define ff first
#define ss second
#define rep(i,x,y) for(int i=x; i<y; i++)
#define rrep(i,x,y) for(int i=x; i>=y; i--)
#define setbits(n)  __builtin_popcountll(n)
#define bitsize(n) (63 - __builtin_clzll(n))
#define lcm(a,b) (a/__gcd(a, b)*b)
#define yn(f) f?cout<<"YES\n":cout<<"NO\n"
#define syn(f) f?cout<<"Yes\n":cout<<"No\n"
mt19937_64 rnd(chrono::steady_clock::now().time_since_epoch().count());
ll M = 1e9+7;
#define vi vector<int>
#define vll vector<ll>
vi fact;
vi spf;
void sieve(int N=1e7){
    spf.assign(N+1,0); rep(i,0,N+1) spf[i]=i;
    for(int i=2; i*i<=N; i++) if(spf[i]==i) for(int j=i*i; j<=N; j+=i) spf[j]=min(spf[j],i);
    //rep(i,2,N+1) if(spf[i]==i) primes.pb(i);
}
ll powm(ll x, ll n)
{
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    ll p = powm(x * x, n / 2);
    if (n % 2)
        return p * x % M;
    else
        return p;
}
 
ll mod_div(ll p, ll q) { return p % M * powm(q, M - 2) % M; }
 
vector<ll> fact;
 
ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;
    return mod_div(fact[n], fact[n - r] * fact[r]);
}
//Doing CP because Coding is My Love.
void Nitin_Chaudhary(){
    ll n;
    cout<<mod_div(4,2)<<endl;
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
