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
#define vpll vector<pair<ll,ll>>
#define fastIO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);cout.precision(numeric_limits<double>::max_digits10);
#define setbits(n)  __builtin_popcountll(n)
#define bitsize(n) (63 - __builtin_clzll(n))
#define lcm(a,b) (a/__gcd(a, b)*b)

//Grinding CP to become specialist
ll distance(ll x1,ll y1,ll x2,ll y2){
    return ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
}
void Nitin_Chaudhary(){
    ll n;
    cin>>n;
    vpll v;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll xs,ys,xt,yt;
    cin>>xs>>ys>>xt>>yt;
    ll d=distance(xs,ys,xt,yt);
    bool flag=false;
    for(auto i:v){
        if(d>=distance(i.first,i.second,xt,yt)){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"NO"<<endl;
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
