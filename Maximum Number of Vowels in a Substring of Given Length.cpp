class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        unordered_set<char> vowels={'a','e','i','o','u'};
        for(int i=0;i<k;i++)
            if(vowels.find(s[i])!=vowels.end())
                    count++;
        
        int ans=count;
        
        for(int i=k;i<s.length();i++){            
            if(vowels.find(s[i])!=vowels.end())
                count++;
            if(vowels.find(s[i-k])!=vowels.end())
                count--;
            ans=max(ans,count);
        }
        return ans;
    }
};
