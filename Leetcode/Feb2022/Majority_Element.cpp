// o(nlogn)
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}
//o(n)
int majorityElement(vector<int>& nums) {
    int cnt=0;
    int val=-1;
    for(int i:nums){
        if(cnt==0){
            val=i;
            cnt++;
        }
        else {
            if(i==val)cnt++;
            else cnt--;
        }
    }
    return val;
}
