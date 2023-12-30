#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],profit =0;

        for(int i=1;i<prices.size();i++){

            int cost = prices[i] - mini;
            profit = max(cost,profit);
            mini = min(prices[i],mini);
        }

        return profit;
    }
};
int main() {
    Solution solution;
    vector<int> prices = {7,1,5,3,6,4};
    int maxProfit = solution.maxProfit(prices);
    cout << "The maximum profit is: " << maxProfit << endl;
    return 0;
}