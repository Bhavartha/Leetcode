class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines=1,ans=0;
        if(S=="") return {0,0};        
        for(auto i:S){
            ans+=widths[i-'a'];
            if(ans>100){
                ans=widths[i-'a'];
                lines++;
            }
        }
        return {lines,ans};
    }
};
