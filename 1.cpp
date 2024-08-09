#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define int_max 1e18
#define int_min -1e18
//Grinding CP to become specialist
void solve(){
    int n,s,m;
    cin>>n>>s>>m;
    vector<pair<int,int>>v;
    v.push_back({0,0});
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        v.push_back({l,r});
    }
    v.push_back({m,m});
    sort(v.begin(),v.end());
    for(int i=1;i<=n+1;i++){
        if((v[i].first-v[i-1].second)>=s){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}
signed main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   solve();

}
return 0;
}
