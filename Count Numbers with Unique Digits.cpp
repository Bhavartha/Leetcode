class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=1;
        int a=1;
        for(int i=0;i<n;i++){
            ans+=9*a;
            a*=(9-i);
        }
        return ans;
    }
};

//OR

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=10;
        int a=9;
        int u=9;
        for(int i=1;i<n;i++){
            u*=a--;
            ans+=u;
        }
        return ans;
    }
};
