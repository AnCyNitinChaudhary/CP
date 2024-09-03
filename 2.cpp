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
    ll x,y,k;
    cin>>x>>y>>k;
    ll val1,val2;
    val1=(x/k);
    if(x%k!=0)val1++;
    val2=(y/k);
    if(y%k!=0)val2++;
    if(val1>val2)cout<<2*val1-1<<endl;
    else cout<<2*val2<<endl;
    // ll ans=0;
    // bool flag=true;
    // while(x>0||y>0){
    //     if(flag)x-=k;
    //     else y-=k;
    //     flag=!flag;
    //     ans++;
    // }
    // cout<<ans<<endl;

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
