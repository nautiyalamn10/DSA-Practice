string minRemoveToMakeValid(string s) {
    set<int>posop,poscl;
    string ans="";
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='a'&&ch<='z')ans.push_back(ch);
        else {
            if(ch==')'){
                if(posop.empty()){poscl.insert(i);continue;}
                else{
                    ans.push_back(ch);
                    posop.erase(*posop.rbegin());
                }
            }
            else{
                posop.insert(i);
            }
        }
    }
    ans="";
    for(int i=0;i<s.size();i++){
        if(posop.find(i)!=posop.end()||poscl.find(i)!=poscl.end()){
            continue;
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}
