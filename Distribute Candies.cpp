class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s(candies.begin(),candies.end());
        return min(candies.size()/2,s.size());
    }
};
