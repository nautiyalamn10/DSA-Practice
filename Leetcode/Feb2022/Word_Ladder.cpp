int ladderLength(string b, string e, vector<string>& words){
    unordered_set<string>dict(words.begin(),words.end());
    int ladder=1;
    queue<string>q;
    q.push(b);
    while(q.size()){
        int n=q.size();
        for(int i=0;i<n;i++){
            string t=q.front();
            q.pop();
            if(t==e)return ladder;
            for(int j=0;j<t.size();j++){
                char ch=t[j];
                for(char c='a';c<='z';c++){
                    if(c==ch)continue;
                    t[j]=c;
                    if(dict.find(t)!=dict.end()){
                        q.push(t);
                        dict.erase(t);
                    }
                }
                t[j]=ch;
            }
        }
        ladder++;
    }
    return 0;
}
