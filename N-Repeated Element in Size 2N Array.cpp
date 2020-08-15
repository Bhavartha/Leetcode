class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_set<int> s;
        for(int i:A){
            if(s.find(i)==s.end()) s.insert(i);
            else return i;
        }
        return 0;
    }
};
