int deleteAndEarn(vector<int>& nums) {
    int n=nums.size();
    int dp[10005];
    memset(dp,0,sizeof dp);
    int arr[10005];
    memset(arr,0,sizeof arr);

    for(int i:nums){
        arr[i]++;
    }
    for(int i=1;i<=10000;i++){
        int aa=((i-2>=0)?dp[i-2]:0);
        dp[i]=max(aa+(i*arr[i]),dp[i-1]);//either prev or cur with dp[i-2]
    }
    return dp[10000];
}
