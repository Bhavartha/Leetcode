class Solution {
public:
    string toHex(int n) {
        unsigned num=n;
        string ans="";
        vector<char> v= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        if(n==0)
            return "0";
        while(num!=0){
            ans=v[num&0xf]+ans;
            num=num>>4;
        }
        return ans;
    }
};
