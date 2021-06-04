class Solution {
public:
    int minOperations(vector<int>& nums, int x) {  
        int n=nums.size();
        unordered_map<int,int> m;
        m[0]=0;
        int pre=0;
        for(int i=0;i<n;i++){
            pre+=nums[i];
            m[pre] = i+1;
        }
        int ans=INT_MAX;
        if(m.find(x)!=m.end())
            ans = min(ans,m[x]);
        for(int i=n-1;i>=0;i--){
            x-=nums[i];
            if(m.find(x)!=m.end() && (n-i)+m[x]<=n)
                ans = min(ans,(n-i)+m[x]);
        }
        return ans==INT_MAX?-1:ans;
    }
};
