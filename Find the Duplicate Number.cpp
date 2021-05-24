class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=1;
        int h=n-1;
        while(l<h){
            int m = l+(h-l)/2;
            int c=0;
            for(auto n:nums)
                if(n<=m) c++;
            if(c>m)
                h=m;
            else l=m+1;            
        }
        return l;
    }
};
