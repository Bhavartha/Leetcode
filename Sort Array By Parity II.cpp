class Solution {
public: 
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans(A.size());
        int e=0,o=1;
        for(auto a:A){
            if(a&1){
                ans[o]=a;
                o+=2;
            }
            else{
                ans[e]=a;
                e+=2;
            }
        }
        return ans;
    }
};
