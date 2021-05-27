class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<char> v;
        string ans="";
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='('){
                if(v.size()>=1) ans.push_back(c);
                v.push_back(c);
            }
            else{
                if(v.size()>1) ans.push_back(c);
                v.pop_back();
            }
        }
        return ans;
    }
};
