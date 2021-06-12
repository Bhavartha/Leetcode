class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,pair<int,int>> m;
        for(int i=0;i<list1.size();i++){
            m[list1[i]].first+=i;
            m[list1[i]].second++;
        }
        for(int i=0;i<list2.size();i++){
            m[list2[i]].first+=i;
            m[list2[i]].second++;
        }
        int mn = INT_MAX;
        for(auto e:m){
            if(e.second.second>1)
                mn = min(mn,e.second.first);
        }
        vector<string> ans;
        for(auto e:m){
            if(e.second.first==mn && e.second.second>1)
                ans.push_back(e.first);
        }
        return ans;
    }
};
