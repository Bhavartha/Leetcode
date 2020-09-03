class Solution {
public:
    vector<int> og;
    vector<int> temp;
    Solution(vector<int>& nums) {
        og = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return og;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        temp=og;
        int n = temp.size();
        for(int i=0;i<n-1;i++){
            int range = n-i;
            int r = (rand() % range)+i;
            swap(temp[i],temp[r]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
