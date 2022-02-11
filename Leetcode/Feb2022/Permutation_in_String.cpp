bool checkInclusion(string s1, string s2) {
    vector<int>cnt(26,0);
    for(char ch:s1)cnt[ch-'a']++;
    vector<int>cnt1(26,0);
    int st=0;
    int end=0;
    int n=s1.size();
    while(end<s2.size()){

        if(end>=n){
            if(cnt==cnt1)return true;
            cnt1[s2[st]-'a']--;
            st++;
        }
        cnt1[s2[end]-'a']++;
        end++;
    }
    if(cnt==cnt1)return true;
    return false;
}
