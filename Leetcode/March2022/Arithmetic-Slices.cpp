int numberOfArithmeticSlices(vector<int>& nums) {
    int st=0,end=0,ans=0;

    int n=nums.size();
    end=2;
    if(n<=2)return ans;
    int d=nums[1]-nums[0];
    int cnt=2;
    while(end<n){
        if(nums[end]-nums[end-1]==d){
            cnt++;
        }
        else{
            int t=cnt-2;
            ans=ans+(t*(t+1))/2;
            d=nums[end]-nums[end-1];
            cnt=2;
        }
        end++;
    }

    int t=cnt-2;
    ans=ans+(t*(t+1))/2;
    return ans;
}
