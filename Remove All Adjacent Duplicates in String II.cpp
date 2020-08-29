class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stk;
        pair<char,int> tmp;
        string ans="";
        for(auto c:s){
            if(stk.empty() || stk.top().first!=c) stk.push({c,1});
            else{
                tmp=stk.top();
                stk.pop();
                tmp.second++;
                if(tmp.second!=k) stk.push(tmp);
            }
        }
        while(!stk.empty()){
            tmp = stk.top();
            stk.pop();
            for(int i=0;i<tmp.second;i++)
                ans=tmp.first+ans;
        }
        return ans;
    }
};
