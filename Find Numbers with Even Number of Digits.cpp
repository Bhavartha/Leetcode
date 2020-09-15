class Solution {
public:
    
    int cd(int num){
        if(num==0) return 1;
        int ans=0;
        while(num>0){
            num/=10;
            ans++;
        }
        return ans;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto n:nums)
            if(cd(n)%2==0)
                ans++;
        return ans;
    }
};
