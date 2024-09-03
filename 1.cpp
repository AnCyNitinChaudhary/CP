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
    ll n;
    cin>>n;
    set<pair<ll,ll>>us;
    set<pair<ll,ll>>s;
    vector<pair<ll,ll>>v;
    ll x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        us.insert({x,y});
        s.insert({x,y});
        v.push_back({x,y});
    }
    ll ans=0;
    set<pair<ll,ll>>us1;
    for(auto i:v){
        if((us.find({i.first,0})!=us.end())&&(us.find({i.first,1})!=us.end())&&(us1.find({i.first,0})==us1.end())&&(us1.find({i.first,1})==us1.end())){
            ans+=n-2;
            us.erase({i.first,0});
            us.erase({i.first,1});
            us1.insert({i.first,0});
            us1.insert({i.first,1});
        }
        if(i.second==1){
            if((s.find({i.first-1,0})!=s.end())&&(s.find({i.first+1,0})!=s.end()))ans++;
        }
        else{
            if((s.find({i.first-1,1})!=s.end())&&(s.find({i.first+1,1})!=s.end()))ans++;
        }
    }
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
