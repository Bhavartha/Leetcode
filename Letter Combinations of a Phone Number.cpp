class Solution {
public:
    vector<string> ans;    
    int n;
    vector<string> ref = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };
    void dfs(string &s,int i, string &digits){
        if(n==i){
            ans.push_back(s);
            return;
        }
        for(auto c: ref[digits[i]-'0']){
            s.push_back(c);
            dfs(s,i+1,digits);
            s.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        n = digits.size();
        string s;
        if(n==0) return {};
        dfs(s,0,digits);
        return ans;
    }
};
