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
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int k=0;
   vector<int>ans;
   while(true){
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    int mid=(mini+maxi)/2;
    if(mini==0&&maxi==0)break;
    else{
        k++;
        ans.push_back(mid);
        for(int i=0;i<n;i++)a[i]=abs(a[i]-mid);
    }
    if(k>40)break;
   }
   if(k<=40){
    cout<<k<<endl;
    for(int i=0;i<k;i++)cout<<ans[i]<<" ";
    cout<<endl;
   }
   else cout<<-1<<endl;

}
return 0;
}
