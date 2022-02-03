/*
O (n^4) : use 4 for loop and check if sum is 0.

*/
int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    int ans=0;
    int n=nums1.size();
    map<int,int>mp;
    for(int k=0;k<n;k++){ //O(n)
        for(int l=0;l<n;l++){ //O(n)
            int s=nums3[k]+nums4[l]; 
            mp[s]++;  //O(logn)
        }
    }
    for(int i=0;i<n;i++){ //O(n)
        for(int j=0;j<n;j++){ //O(n)
            int a=nums1[i]+nums2[j];
            ans+=mp[-a];  //O(logn)
        }
    }
  //TC : O(n*n*logn)+O(n*n*logn)
    return ans;
}
