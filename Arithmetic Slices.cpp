class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int ans=0,count=0;
        for(int i=2;i<A.size();i++){
            if(A[i]-A[i-1]==A[i-1]-A[i-2]){
                count++;
                ans+=count;
            }
            else count=0;
        }
        return ans;
    }
}; 
