class Solution {
public:
    vector<string> readBinaryWatch(int n) {
        vector<string> ans;        
        for(int i=0;i<12;i++)
            for(int j=0;j<60;j++)
                if(__builtin_popcount(i)+__builtin_popcount(j) == n){
                    string s=to_string(i);
                    s.push_back(':');
                    if(j<10) s.push_back('0');
                    s+= to_string(j);
                    ans.push_back(s);
                }
        return ans;
    }
};
