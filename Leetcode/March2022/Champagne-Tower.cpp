double champagneTower(int poured, int query_row, int query_glass) {
    double dp[101][101];
    int n=99;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dp[i][j]=0.0;
    double ans=0;
    dp[0][0]=poured;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(dp[i][j]>1){
                double val=dp[i][j]-1;
                //upr se pour
                dp[i+1][j]+=val/2;
                dp[i+1][j+1]+=val/2;
                dp[i][j]=1;
            }
        }
    }
    return dp[query_row][query_glass];
}
