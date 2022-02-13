vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>ans;
    int n=nums.size();
    int sz=1<<n;
    for(int i=0;i<sz;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            int a=i&(1<<j);
            if(a)temp.push_back(nums[j]);
        }
        ans.push_back(temp);
    }
    return ans;
}//bit manip
