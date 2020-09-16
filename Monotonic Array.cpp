class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool iA=true,iD=true;
        for(int i=1;i<A.size();i++){
            if(A[i]<A[i-1])
                iA=false;
            else if(A[i]>A[i-1])
                iD=false;
        }
        return iA || iD;
    }
};
