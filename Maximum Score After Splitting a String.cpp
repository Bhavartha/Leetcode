class Solution {
public:
    int maxScore(string s) {
        int ans=0;
        int a=count(s.begin(),s.end(),'1');
        for(int i=0;i<s.length()-1;i++){
            s[i]=='0'?a++:a--;
            ans=max(a,ans);
        }
        return ans;
    }
};
