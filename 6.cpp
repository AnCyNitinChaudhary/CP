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
    ll a[n];
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll i=0;
    // while(i<n){
    //     if(a[i]==0)ans--;
    //     else if(a[i]==1||a[i]==2){
    //         if(i+1<n){
    //             if(a[i+1]==2||a[i+1]==1){
    //                 ans--;
    //                 i++;
    //             }
    //         }
    //     }
    //     i++;
    // }
    // cout<<ans<<endl;
//failing on this test case
//10
//2 0 1 4 4 4 4 2 0 1
//expected 7 and found 8
    while(i<n){
        int flag=0;
        if(a[i]==1||a[i]==2){
            if((i+1<n)&&(a[i+1]==2||a[i+1]==1)){
                    cout<<"first"<<endl;
                    ans++;
                    i++;
                    flag=1;
            }
            else if((i+3<n)){
                if(a[i+1]==3||a[i+1]==4){
                    if(a[i+2]==3||a[i+2]==4){
                        if(a[i+3]==1||a[i+3]==2){
                            cout<<"second"<<endl;
                            ans+=3;
                            i+=3;
                            flag=1;
                        }
                    }
                }
            }
        }
        if(flag==0&&a[i]!=0){
            cout<<"third"<<i<<endl;
            ans++;
        }
        i++;
    }
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
