int findPairs(vector<int>& nums, int k) {
    map<int,int>mp;
    for(auto i:nums)mp[i]++;
    int ans=0;
    set<int>st;
    for(auto i:nums)st.insert(i);
    for(auto i:st){
        if(k==0){
            if(mp[i]>1)ans++;
            continue;
        }
        if(mp[i+k])ans++;
    }
    return ans;
}
