class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        if(a.size()>b.size()) swap(a,b);
        int n = a.size()+b.size();
        int req = (n+1)/2;
        int low = 0;
        int high = a.size();
        while(low<=high){
            int pick = (low+high)/2;
            int pick2 = req-pick;
            
            int l1 = pick!=0?a[pick-1]:INT_MIN;
            int l2 = pick2!=0?b[pick2-1]:INT_MIN;
            int r1 = pick!=a.size()?a[pick]:INT_MAX;
            int r2 = pick2!=b.size()?b[pick2]:INT_MAX;
            
            if(l1<=r2 && l2<=r1){
                if(n&1)
                    return max(l1,l2);
                else
                    return (max(l1,l2)+min(r1,r2))/2.0;
            }
            
            if(l1>r2) high = pick-1;
            else low = pick+1;
        }
        return 0;
    }
};
