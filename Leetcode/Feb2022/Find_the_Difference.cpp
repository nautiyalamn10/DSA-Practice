char findTheDifference(string s, string t) {
    vector<int>cnt(26,0);
    for(char ch:s)cnt[ch-'a']++;
    for(char ch:t){
        if(cnt[ch-'a']==0)return ch;
        cnt[ch-'a']--;
    }
    return 's';
}
