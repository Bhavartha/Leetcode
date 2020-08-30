class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int total_sum=0;
        int l_mn=0,mn=arr[0];
        int l_mx=0,mx=arr[0];
        for(auto a:arr){
            total_sum+=a;
            l_mx = max(l_mx+a,a);
            mx = max(mx,l_mx);
            l_mn = min(l_mn+a,a);
            mn = min(mn,l_mn);
        }
        return mx>0?max(mx,total_sum-mn):mx;
    }
};
