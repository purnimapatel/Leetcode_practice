int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    int profitmax = 0;
    int largest = prices[n-1];
    for(int i = n-1; i>=0; i--){
        largest = max(largest,prices[i]);
        profitmax = max(profitmax,largest-prices[i]);
    }
    return profitmax;
}