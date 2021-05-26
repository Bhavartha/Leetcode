class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n= piles.size()/3;
        int ans=0;
        sort(piles.begin(),piles.end(),greater<int>());
        int i=1;
        while(n--){
            ans+=piles[i];
            i+=2;
        }
        return ans;
    }
};
