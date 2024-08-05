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
   int b[n-1];
   for(int i=0;i<n-1;i++)cin>>b[i];
   vector<int>ans(n,0);
   int flag=1;
   for(int i=0;i<n-1;i++){
      for(int ind=0;ind<30;ind++){
         if((b[i]&(1<<ind))!=0){
            ans[i]|=(1<<ind);
            ans[i+1]|=(1<<ind);
         }
      }
   }
   for(int i=0;i<n-1;i++){
      if(b[i]!=(ans[i]&ans[i+1])){
         flag=0;
         break;
      }
   }
   if(flag){
      for(int i=0;i<n;i++)cout<<ans[i]<<" ";
      cout<<endl;
   }
   else cout<<-1<<endl;
}
return 0;
}
