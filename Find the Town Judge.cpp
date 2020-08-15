class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> trusts(N,0),trusted(N,0);
        for(auto i:trust){
            trusts[i[0]-1]++;
            trusted[i[1]-1]++;
        }
        
        for(int i=0;i<N;i++)
            if(trusts[i]==0 && trusted[i]==N-1) 
                return i+1;
        
        return -1;
    }
};
