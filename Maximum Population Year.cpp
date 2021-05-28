class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> yr(1002);
        for(auto l:logs){
            yr[l[0]-1949]++;
            yr[l[1]-1949]--;
        }
        for(int i=1;i<1002;i++)
            yr[i]+=yr[i-1];
        int y = max_element(yr.begin(),yr.end()) - yr.begin();
        return y+1949;
    }
};
