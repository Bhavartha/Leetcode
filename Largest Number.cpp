class Solution {
public:    
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(auto n:nums)
            v.push_back(to_string(n));        
        sort(v.begin(),v.end(),
             [](string a,string b){
                return a+b > b+a;
            }
        );        
        if(v[0]=="0") return "0";
        string ans;
        for(auto e:v)
            for(auto f:e)
                ans.push_back(f);
        return ans;
    }
};
