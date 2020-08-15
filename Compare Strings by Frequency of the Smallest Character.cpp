class Solution {
public:
    int freq(string s){
        vector<int> c(26,0);
        for(auto _:s) c[_-'a']++;
        for(auto _:c) if(_) return _;
        return 0;
    }
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ans,q,w;
        for(auto _:queries) q.push_back(freq(_));
        for(auto _:words) w.push_back(freq(_));
        int temp;
        for(auto i:q){
            temp=0;
            for(auto j:w) if(j>i) temp++;
            ans.push_back(temp);
        }
        return ans;
    }
};
