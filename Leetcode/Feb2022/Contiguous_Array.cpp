int findMaxLength(vector<int>& nums) {
    int sum=0,ans=0;
    map<int,int>vis;
    vis[0]=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)nums[i]=-1;
        sum+=nums[i];
        if(vis.find(sum)!=vis.end()){
            ans=max(ans,i-vis[sum]);
        }
        else{
            vis[sum]=i;
        }
    }
    return ans;
}
/*
similar problems i have solved in codeforces also.

*/
