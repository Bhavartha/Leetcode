class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> ss;
        unordered_map<int,int> um;
        for(int i=0;i<nums2.size();i++){
            while(!ss.empty() && ss.top()<nums2[i]){
                um.insert({ss.top(),nums2[i]+1});
                ss.pop();
            }
            ss.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
            nums1[i] = um[nums1[i]]-1;
        return nums1;
    }
};
