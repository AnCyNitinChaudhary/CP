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
    ll p[n];
    // map<ll,ll>um;
    for(ll i=0;i<n;i++){
        cin>>p[i];
        // um[p[i]]++;
    }
    for(ll i=0;i<n;i++){
        if(p[i]==n)cout<<1<<" ";
        else cout<<p[i]+1<<" ";
    }
    cout<<endl;
    // cout<<"here"<<endl;
    // ll i=0;
    // unordered_set<int>us;
    // while(i<n){
    //     for(int ind=0;ind<n;ind++){
    //         if((us.find(p[ind])==us.end())&&(p[ind]!=p[i])){
    //             us.insert(p[ind]);
    //             cout<<p[ind]<<" ";
    //             i++;
    //             break;
    //         }
    //     }
        // cout<<" running"<<endl;
    // }
    // while(i<n){
    //     cout<<"running"<<endl;
    //     for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    //         cout<<itr->first<<endl;
    //         if(itr->first!=p[i]){
    //             cout<<itr->first<<" ";
    //             um.erase(itr->first);
    //             cout<<"size"<<um.size()<<endl;
    //             i++;
    //             break;
    //         }
    //     }
    // }
    // cout<<endl;
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
