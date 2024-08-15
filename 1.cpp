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

//Grinding CP
void Nitin_Chaudhary(){
    ll n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=n-2;i>=0;i-=2){
        if(k==0)break;
        int diff=a[i+1]-a[i];
        if(k>diff){
            k-=diff;
            a[i]=a[i+1];
        }
        else{
            a[i]+=k;
            k=0;
        }
    }
    int ans=0;
    for(int i=n-2;i>=0;i-=2){
        ans+=(a[i+1]-a[i]);
    }
    if(n%2==1)ans+=a[0];
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
