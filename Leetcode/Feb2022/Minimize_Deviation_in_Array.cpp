int minimumDeviation(vector<int>& nums) {
    int res=INT_MAX,ans=INT_MAX;
    priority_queue<int>pq;
    int mn=INT_MAX;
    for(int &n:nums){
        if(n%2)n<<=1;
        pq.push(n);
        mn=min(mn,n);
    }
    while(pq.top()%2==0){
        ans=min(ans,pq.top()-mn);
        mn=min(mn,pq.top()/2);
        pq.push(pq.top()/2);
        pq.pop();
    }
    ans=min(ans,pq.top()-mn);
    return ans;
}
/*
1. even only decrease
2. odd doubles one time
3. make all odd 
4. now check max - min in current scene
5. then remove max and push max/2 update min .
6. check again keep checking till we have even top we can decrease 
*/
