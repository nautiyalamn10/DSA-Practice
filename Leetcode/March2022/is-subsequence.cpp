bool isSubsequence(string s, string t) {
    if(s.size()>t.size())return false;
    int i=0,j=0;
    while(i<s.size()&&j<t.size()){
        while(s[i]!=t[j]&&j<t.size())j++;
       if(j!=t.size()) i++,j++; //if j does not exceed the size --> I got the match
    }
    return i==s.size();
}
