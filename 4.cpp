#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    // ll b[n*n];
    // ll ind=0;
    // ll k=0;
    // ll sum=0;
    // ll pre=0;
    // for(ll i=0;i<n*n;i++){
    //     sum+=a[ind];
    //     k++;
    //     b[i]=sum;
    //     ind++;
    //     if(ind==n){
    //         ind=0;
    //     }
    //     if(k==n){
    //         pre++;
    //         if(pre==n)pre=0;
    //         ind=pre;
    //         k=0;
    //     }
    // }


    ll pre[n];
    pre[0]=a[0];
    for(ll i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll suml=0;
        if(l<n)suml=pre[l-1];
        else{
            suml+=pre[n-1]*(l/n);
            if(l%n!=0){
                ll 
            }

        }
    }

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
