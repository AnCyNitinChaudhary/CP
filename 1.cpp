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
//From this question i learn that-> Yes it might take time to get it accepted by it will definitely accepted if you keep trying it. I have changed my way of implementation and finally make it implemented.
void Nitin_Chaudhary(){
    ll n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    s+="L";
    bool flag=true;
    ll curr=-1;
    while(curr<n){
        // cout<<curr<<endl;
        ll end=curr;
        for(int i=curr+1;i<=n;i++){
            if(s[i]=='L'){
                end=i;
                break;
            }
        }
        if(end-curr<=m){
            curr=end;
            continue;
        }
        else{
            ll finalend=end;
            while(end-curr>m){
                if(s[end-1]=='W'){
                    if(k>0){
                        k--;
                        end--;
                    }
                    else break;
                }
                else break;
            }
            if(end-curr<=m){
                curr=finalend;
            }
            else break;
        }

    }
    if(curr==n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    

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