int subarraySum(vector<int>& nums, int k) {
    map<int,int>mp;
    // mp[0]=1;
    int sum=0,ans=0;
    for(int i:nums){
        sum+=i;
        if(sum==k)ans++;
        if(mp.find(sum-k)!=mp.end())ans+=mp[sum-k];
        mp[sum]++;
    }
    return ans;
}
