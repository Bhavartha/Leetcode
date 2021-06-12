class Solution {
public:
    int countOdds(int a, int b) {
        int ans = 0;
        if(a&1){
            ans++;
            a++;
        }
        if(b&1){
            ans++;
            b--;
        }
        return ans + (b+1)/2 - (a+1)/2;
    }
};
