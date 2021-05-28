class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> us;
        for(auto w:words){
            string s;
            for(auto c:w)
                s+= morse[c-'a'];
            us.insert(s);
        }
        return us.size();
    }
};
