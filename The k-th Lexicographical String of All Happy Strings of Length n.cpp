class Solution {
public:
    vector<string> v;
    vector<char> c={'a','b','c'};
    void gen(string &s,int n){
        if(n==0){
            v.push_back(s);
            return;
        }
        for(auto i:c){
            if(s.size()>0 && *s.rbegin()==i) continue;
            s.push_back(i);
            gen(s,n-1);
            s.pop_back();
        }
    }
    
    string getHappyString(int n, int k) {
        string s="";
        gen(s,n);
        if(v.size()<k) return "";
        sort(v.begin(),v.end());
        return v[--k];
    }
};
