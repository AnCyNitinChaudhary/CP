#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long
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
    int n;
    cin>>n;
    vi a(n);
    vi b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int flag=1;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    if(flag==0){
        flag=1;
        reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
    }
    }
    if(flag)cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
    
    // if((min(a[0],a[n-1])==min(b[0],b[n-1]))&&(max(a[0],a[n-1])==max(b[0],b[n-1])))cout<<"Bob"<<endl;
    // else cout<<"Alice"<<endl;

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
