int titleToNumber(string s) {
    int p=0,col=0;
    for(int i=s.size()-1;i>=0;i--){
        col=col+pow(26,p++)*(s[i]-'A'+1);//+s[i]-'A'+1; 26 ki power humesa bdegi na bhai
    }
    return col;
}
