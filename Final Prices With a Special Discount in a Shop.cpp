class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> s;
        for(int i=0;i<n;i++){
            while(s.size() && prices[i]<=prices[s.top()]){
                prices[s.top()]-=prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};
