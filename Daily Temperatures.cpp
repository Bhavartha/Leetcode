class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> ss;
        int n=T.size();
        for(int i=0;i<n;i++){
            while(!ss.empty() && T[ss.top()]<T[i]){
                T[ss.top()] = i-ss.top();
                ss.pop();
            }
            ss.push(i);
        }
        while(!ss.empty()){
            T[ss.top()] = 0;
            ss.pop();
        }
        return T;
    }
};
