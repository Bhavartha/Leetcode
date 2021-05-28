class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string a,b;
        for(auto w:w1)
            a+=w;
        for(auto w:w2)
            b+=w;
        return a==b;
    }
};
