class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(auto r:matrix){
            for(auto c:r){
                if(pq.size()<k) pq.push(c);
                else if(pq.top()>c){
                    pq.pop();
                    pq.push(c);
                }
            }
        }
        return pq.top();
    }
};
