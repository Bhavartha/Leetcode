/* O(n) Time && O(1) Space */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prod=1;
        int zc=0;
        for(auto &n:nums){
            if(n!=0) prod*=n;
            else zc++;
        }
        for(auto &n:nums){
            if(zc>1) n=0;
            else if(n==0 && zc==1) n=prod;
            else if(zc==1) n=0;
            else n=prod/n;
        }
        return nums;
    }
};


/* O(n) Time && O(n) Space */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> fd(n),bd(n);
        int pre = 1;
        for(int i=0;i<n;i++){
            pre*=nums[i];
            fd[i] = pre;
        }
        pre = 1;
        for(int i=n-1;i>=0;i--){
            pre*=nums[i];
            bd[i] = pre;
        }
        for(int i=0;i<n;i++){
            int t=1;
            if(i>0)
                t*= fd[i-1];
            if(i<n-1)
                t*= bd[i+1];
            nums[i]=t;
        }
        return nums;
    }
};
