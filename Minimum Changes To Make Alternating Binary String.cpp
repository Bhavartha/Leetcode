class Solution {
public:
    int minOperations(string s) {
        int e0=0,e1=0,o0=0,o1=0;
        for(int i=0;i<s.size();i++){
            if(i&1){
                if(s[i]=='0') o0++;
                else o1++;
            }
            else{
                if(s[i]=='0') e0++;
                else e1++;
            }
        }
        return min(o0+e1,o1+e0);
    }
};
