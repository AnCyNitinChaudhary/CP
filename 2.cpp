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

void Nitin_Chaudhary(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>um;
    for(auto i:s)um[i]++;
    int start=0;
    int ind=0;
    priority_queue<pair<int,char>>pq;
    for(auto i:um)pq.push({i.second,i.first});
    while(!pq.empty()){
        int temp=pq.top().first;
        char c=pq.top().second;
        pq.pop();
        while(temp--){
            s[ind]=c;
            ind+=2;
            if(ind>=n){
                start++;
                ind=start;
            }
        }
    }
    cout<<s<<endl;

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
