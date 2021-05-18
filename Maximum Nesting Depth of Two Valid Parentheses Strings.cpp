class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> r={0};
        int x=0;
        for(int i=1;i<seq.size();i++){
            if(seq[i]=='('){
                x^=1;
                r.push_back(x);
            }
            else{
                r.push_back(x);
                x^=1;
            }
        }
        return r;
    }
};
