class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum=0;
        int val,index;
        for(int i:A)
            if(!(i&1)) sum+=i;
        
        for(auto q:queries){
            val=q[0];
            index=q[1];
            if(!(A[index]&1)) sum-=A[index];
            A[index]+=val;
            if(!(A[index]&1)) sum+=A[index];
            ans.push_back(sum);
        }
        
        return ans;
    }
};
