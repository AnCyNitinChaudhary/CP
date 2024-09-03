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
    ll n,k;
    cin>>n>>k;
    ll totalsum=(n*k)+(n*(n-1))/2;
    ll mini=INT_MAX;
    // for(int i=1;i<=n;i++){
        // ll sum1=(i*k)+(i*(i-1))/2;
        // ll sum2=totalsum-sum1;
        // if(abs(sum1-sum2)<mini){
        //     mini=abs(sum1-sum2);
        // }
    // }

    ll left=1;
    ll right=n;
    while(left<=right){
        ll mid=(left+right)/2;
        ll sum1=(mid*k)+(mid*(mid-1))/2;
        ll sum2=totalsum-sum1;
        if(sum1==sum2){
            mini=0;
            break;
        }
        else if(sum1>sum2){
            if(sum1-sum2<mini){
                mini=sum1-sum2;
            }
            right=mid-1;
        }
        else{
            if(sum2-sum1<mini){
                mini=sum2-sum1;
            }
            left=mid+1;
        }
    }
    cout<<mini<<endl;
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
