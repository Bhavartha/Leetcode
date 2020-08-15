class Solution {
public:
    string restoreString(string str, vector<int>& indices) {
        string s=str;
        for(int i=0;i<indices.size();i++)
             s[indices[i]]=str[i];
        return s;
    }
};
