class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> v;
        for(int i=0;i<s1.size();i++)
            if(s1[i]!=s2[i]) 
                v.push_back(i);
        if(v.empty())
            return true;
        return v.size()==2 && s1[v[0]]==s2[v[1]] && s1[v[1]]==s2[v[0]];
    }
};
