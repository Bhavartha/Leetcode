class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> r;
        int x=0;
        for(char s:seq){
            if(s=='('){
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
