class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> v(n);
        int i=0;
        int inc=1;
        for(auto c:s){
            v[i]+=c;
            i+=inc;
            if(i==n-1 || i==0) inc=-inc;
        }
        string a="";
        for(auto c:v) a+=c;
        return a;
    }
};
