// Recursion

class Solution {
public:
    int r(int n,int l){
        if(n==1) return l;
        int t=0;
        for(int i=0;i<l;i++){
            t += r(n-1,l-i);
        }
        return t;
    }
    
    int countVowelStrings(int n) {
        return r(n,5);
    }
};

// Memoization

class Solution {
public:
    int r(int n,int l,vector<vector<int>> &dp){
        if(n==1)
            return l;
        
        if(dp[n][l]!=-1)
            return dp[n][l];
        
        int t=0;
        for(int i=1;i<=l;i++){
            t += r(n-1,i,dp);
        }
        
        return dp[n][l]=t;
    }
    
    int countVowelStrings(int n) {
        vector<vector<int>> dp(n+1,vector<int>(6,-1));
        return r(n,5,dp);
    }
};


