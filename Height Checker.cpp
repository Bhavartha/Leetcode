class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans=0;
        vector<int> sh(heights);
        sort(sh.begin(),sh.end());
        for(int i=0;i<sh.size();i++)
            if(sh[i]!= heights[i])
                ans++;
        return ans;
    }
};
