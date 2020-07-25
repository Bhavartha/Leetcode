class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size()<3)
            return false;
        
        int mx = *max_element(A.begin(),A.end());
        
        int index = distance(A.begin(),find(A.begin(),A.end(),mx));
        if(index==0 || index==(A.size()-1))
            return false;
        
        for(int i=0;i<index;i++)
            if(A[i]>=A[i+1])
                return false;
        
        for(int i=index;i<A.size()-1;i++)
            if(A[i]<=A[i+1])
                return false;
        
        return true;
    }
};
