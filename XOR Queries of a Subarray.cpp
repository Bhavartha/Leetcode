class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int start,end;
        arr.insert(arr.begin(),0);
        for(int i=1;i<arr.size();i++)
            arr[i]^=arr[i-1];
        
        for(auto q:queries){
            start=q[0];
            end=q[1]+1;
            ans.push_back(arr[end]^arr[start]);
        }
        return ans;
        
    }
};
