static bool comp(const vector<int>&v1,const vector<int>&v2){
    if(v1[0]!=v2[0])
    return (v1[0]<v2[0]);//return true;
    return v1[1]>=v2[1];
}
int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),comp);
    vector<int>temp=intervals[0];
    int cnt=-1;int n=intervals.size();


    for(auto it:intervals){
        // cout<<it[0]<<" , "<<it[1]<<endl;
        if(it[0]>=temp[0]&&it[1]<=temp[1]){
            cnt++;
        }else{
            temp=it;
        }
    }
    return n-cnt;
}
