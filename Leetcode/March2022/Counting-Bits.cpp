class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int cnt=0,t=i;
            while(t){
                if(t%2)
                cnt++;
                t/=2;
                
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
/*
1 : __builtin_popcount(X)
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(__builtin_popcount(i));//using stl method
        }
        return ans;
    }
2: Checking bit by bit using divide
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            int cnt=0,t=i;
            while(t){
                if(t%2)
                cnt++;
                t/=2;
                
            }
            ans.push_back(cnt);
        }
        return ans;
    }
*/
