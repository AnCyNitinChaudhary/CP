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
    int l,r,L,R;
    cin>>l>>r;
    cin>>L>>R;
    if(L>r||l>R){
        cout<<1<<endl;
        return;
    }
    if(L<l){
        swap(l,L);
        swap(r,R);
    }
    vector<pair<int,int>>v;
    v.push_back({l,r});
    v.push_back({L,R});
    // if(v[0].second<v[1].first)cout<<1<<endl;
    // else if(v[0].second==v[1].first){
    //     if(v[0].first<v[0].second)cout<<2<<endl;
    //     else cout<<1<<endl;
    //     return;
    // }
    // else if((v[0].second>=v[1].first)&&v[1].second>=v[0].second){
    //     // cout<<"a2"<<endl;
    //     cout<<v[0].second-v[1].first+1<<endl;
    // }
    // else {
    //     // cout<<"a3"<<endl;

    //     cout<<v[1].second-v[1].first+2<<endl;
    // }
    map<int,int>um;
    for(ll i=v[0].first;i<=v[0].second;i++)um[i]++;
    for(ll i=v[1].first;i<=v[1].second;i++)um[i]++;
    ll temp=0;
    ll left=-1;
    ll right=-1;
    for(int i=1;i<=100;i++){
        if(um[i]==2){
            temp++;
            if(left==-1)left=i;
            right=i;
        }
    }
    temp--;
    ll mini=min({l,L,r,R});
    ll maxi=max({l,L,r,R});
    // if(min(v[0].first==v[1].first)||(v[0].second==v[1].second))temp--;
    if(mini<left)temp++;
    if(maxi>right)temp++;
    cout<<temp<<endl;

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
