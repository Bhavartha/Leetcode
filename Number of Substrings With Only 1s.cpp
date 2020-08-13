class Solution {
public:
    int numSub(string s) {
        long long ans=0;
        int a =1000000007;
        int sum=0;
        
        long long c=0;
        for(int i=0;i<s.length();i++)
            if(s[i]=='1')
                c++;
            else{
                sum=(sum%a+(c*(c+1)/2)%a)%a;
                c=0;
            }
        sum=(sum%a+(c*(c+1)/2)%a)%a;

        return sum;
    }
};
