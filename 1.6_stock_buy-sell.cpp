#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxProfit = 0;
    int minPrice = prices[0];
    for(int price:prices) {
        int profit = price - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, price);
    }
    return maxProfit;
}