vector<string> summaryRanges(vector<int>& nums) {
  vector<string>ans;
  if(nums.size()==0)return ans;
  string str="";
  str+=(to_string(nums[0]));
  int prev=nums[0];
  for(int i=1;i<nums.size();i++){
      if(nums[i]==nums[i-1]+1){

      }
      else{
          if(nums[i-1]==prev){
              ans.push_back(str);
              str="";
              str+=(to_string(nums[i]));
          }
          else{
             str.push_back('-');
             str.push_back('>');
              str+=(to_string(nums[i-1]));
              ans.push_back(str);
              str="";    str+=(to_string(nums[i]));

          }
          prev=nums[i];
      }
  }
  int i=nums.size();
  if(nums[i-1]==prev){
      ans.push_back(str);
      str="";
      // str+=(to_string(nums[i]));
  }
  else{
     str.push_back('-');
     str.push_back('>');
      str+=(to_string(nums[i-1]));
      ans.push_back(str);
      str="";    //str+=(to_string(nums[i]));

  }
  return ans;
  }
