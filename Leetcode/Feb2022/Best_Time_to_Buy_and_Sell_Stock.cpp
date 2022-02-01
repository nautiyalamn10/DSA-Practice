/*

Lets suppose prices of stock are following: [7,34,6,1,1,2,4,3,5]
so if we buy stock at day 1 and sell at day 2 we get profit of 34-7=27
and in further days at day 3 we see stock is at its lowest price so it is better if we buy it on day 3 and sell in coming days
Day 4: we still see dip in stock price so we buy it at its lowest and will sell in coming days
maximum profit that we can get after buying on 4th day is if we sell our stock at last day.
But the maximum profit that we get is still coming from the first two days trade.
*/

int maxProfit(vector<int>& prices) {
      int mintillnow=INT_MAX;
      int maxprofit=0;
      for(int i:prices){
          mintillnow=min(mintillnow,i);
          maxprofit=max(maxprofit,i-mintillnow);
      }
      return maxprofit;
}
