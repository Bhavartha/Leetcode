class Solution {
public:
    int minOperations(int n) {
        int start = n&1?2:1;
        n/=2;
        return n*(2*start+(n-1)*2)/2;
    }
};
