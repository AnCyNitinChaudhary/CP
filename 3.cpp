#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define int_max 1e18
#define int_min -1e18

signed main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   int a[n];
   int maxi=INT_MIN;
   for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]>maxi&&(n-i-1)%2==0){
         maxi=a[i];
      }
   }
   if(maxi==INT_MIN)maxi=0;
   cout<<maxi<<endl;


}
return 0;
}
