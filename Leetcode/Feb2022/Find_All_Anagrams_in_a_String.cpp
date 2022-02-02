vector<int> findAnagrams(string s, string p) {
        vector<int>cnt(26,0);
        for(char ch:p)cnt[ch-'a']++;
        int k=p.size(),n=s.size();
        int st=0,end=0;
        vector<int>cnt1(26,0),ans;
        while(end<n){
            cnt1[s[end]-'a']++;
            if(end-st+1==k){
                if(cnt==cnt1){
                    ans.push_back(st);
                }
                cnt1[s[st]-'a']--;
                st++;
                end++;
            }
            else end++;
        }
        return ans;
    }
