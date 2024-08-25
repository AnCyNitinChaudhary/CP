#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define int_max 1e18
#define int_min -1e18
ll MOD =1e9+7;
//Grinding for becoming Specialist
//treat 0 as -1 and now problem reduced to count no. of subarray whose sum is equal to 0
ll subarraySum(vector<ll>& nums) {
        ll n=nums.size();
        ll sum=0;
        ll ans=0;
        unordered_map<ll,ll>um;
        um[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ll right=n-i;
            ll left=um[sum];
            ans+=((left%MOD)*(right%MOD))%MOD;
            ans%=MOD;
            um[sum]+=(i+2);
            um[sum]%=MOD;
        }
        return ans;
}
int main(){
ios::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector<ll>nums;
    for(auto i:s){
        if(i=='0')nums.push_back(-1);
        else nums.push_back(1);
    }
    cout<<subarraySum(nums)<<endl;
}
return 0;
}