bool check(char c,char b){
    if(c=='('&&b==')')return true;
    if(c=='['&&b==']')return true;
    if(c=='{'&&b=='}')return true;
    return false;
}
bool isValid(string s) {
    stack<char>St;
    for(char i:s){
        if(i=='('||i=='{'||i=='['){
            St.push(i);
        }
        else{
            if(St.size()==0)return false;
            else{
                char ch=St.top();St.pop();
                if(check(ch,i))continue;
                else return false;
            }
        }
    }
    if(St.size())return false;

    return true;
}
