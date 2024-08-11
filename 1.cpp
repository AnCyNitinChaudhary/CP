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
    vector<ll>ansx;
    vector<ll>ansy;
    ll sumx=0;
    ll sumy=0;
    int val=1;
    for(ll i=0;i<k-1;i++){
        ansx.push_back(i);
        ansy.push_back(i+1);
        sumx+=i;
        sumy+=i+1;
    }
    ansx.push_back(k*x-sumx);
    ansy.push_back(k*y-sumy);
    for(int i=0;i<k;i++)cout<<ansx[i]<<" "<<ansy[i]<<endl;
    
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
