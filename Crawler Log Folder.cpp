class Solution {
public:
    int minOperations(vector<string>& logs) {
        int a=0;
        for(auto l:logs){
            if(l=="../")
                a=max(0,a-1);
            else if(l=="./")
                continue;
            else a++;
        }
        return a;
    }
};
