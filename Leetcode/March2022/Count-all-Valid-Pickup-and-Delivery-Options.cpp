public:
    int countOrders(int n) {
        long ans=1;
        const int mod=1e9+7;
        for(int i=1;i<=n;i++){
            ans=(ans*((2*1ll*i-1)*1ll*i))%mod;
        }
        return int(ans);
        
        
    }
};
/*
Assume we have already n - 1 pairs, now we need to insert the nth pair.
To insert the first element, there are n * 2 - 1 chioces of position。
To insert the second element, there are n * 2 chioces of position。
So there are (n * 2 - 1) * n * 2 permutations.
Considering that delivery(i) is always after of pickup(i), we need to divide 2.
So it's (n * 2 - 1) * n.
*/
