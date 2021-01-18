class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        int x,y,z;
        
        make_heap(s.begin(),s.end());
        while(s.size()>1){
            x = s.front();
            pop_heap(s.begin(), s.end()); 
            s.pop_back();
            y = s.front();
            pop_heap(s.begin(), s.end()); 
            s.pop_back();
            z = x-y;
            s.push_back(z);
            push_heap(s.begin(),s.end());
        }
        return s.front();
        
    }
};
