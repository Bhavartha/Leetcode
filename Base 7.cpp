class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)return "0";
        bool neg=false;
        if(num<0){
            neg=true;
            num=-num;
        }
        string ans="";
        while(num>0){
            ans=to_string(num%7)+ans;
            num/=7;
        }
        if(neg) ans="-"+ans;
        return ans;
    }
};
