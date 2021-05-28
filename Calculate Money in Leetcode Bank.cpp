class Solution {
public:
    int ss(int a,int b){
        return (b-a+1)*(a+b)/2;
    }
    
    int totalMoney(int n) {
        int s=1;
        int ans=0;
        for(;n>=7;n-=7){
            ans+= ss(s,s+6);
            s++;
        }
        ans+= ss(s,s+n-1);
        return ans;
    }
};
