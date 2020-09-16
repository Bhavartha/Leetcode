class Solution {
public:
    string sortString(string s) {
        vector<int> c(26,0);
        string a="";
        for(auto i:s)
            c[i-'a']++;
        while(a.length()<s.length()){
            for(int i=0;i<26;i++)
                if(c[i]>0){
                    a+= 'a'+i;
                    c[i]--;
                }
            for(int i=25;i>=0;i--)
                if(c[i]>0){
                    a+= 'a'+ i;
                    c[i]--;
                }
        }
        return a;
    }
};
