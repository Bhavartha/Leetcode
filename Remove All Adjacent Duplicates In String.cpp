class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> c;
        string ans="";
        for(auto s:S){
            if(!c.empty() && s==c.top()) c.pop();
            else c.push(s);
        }
        while(!c.empty()){
            ans=c.top()+ans;
            c.pop();
        }
        return ans;
    }
};
