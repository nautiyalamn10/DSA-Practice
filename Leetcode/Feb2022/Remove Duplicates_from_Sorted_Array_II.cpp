 int removeDuplicates(vector<int>& nums) {
    int unique=0;
    nums[unique++]=nums[0];
    int cnt=1;
    for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]&&cnt<2){
                nums[unique++]=nums[i];
                cnt++;
            }else if(nums[i]==nums[i-1])cnt++;
            else{
                nums[unique++]=nums[i];
                cnt=1;
            }

    }
    return unique;
}
