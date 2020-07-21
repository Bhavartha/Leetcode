class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int right=0;
        int count=0;
        unordered_set<char> vowels={'a','e','i','o','u'};
        for(int i=0;i<k;i++,right++)
            if(vowels.find(s[right])!=vowels.end()){
                    count++;
                }
        int ans=count;
        while(right!=s.length()){            
            if(vowels.find(s[right])!=vowels.end())
                count++;
            if(vowels.find(s[left])!=vowels.end())
                count--;
            ans=max(ans,count);
            left++;
            right++;
        }
        return ans;
    }
};
