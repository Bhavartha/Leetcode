class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans[] = {0,0,0,0,0}; //balon
        for(int i=0;i<text.length();i++){
            switch(text[i]){
                case 'b': ans[0]+=2;break;
                case 'a': ans[1]+=2;break;
                case 'l': ans[2]++;break;
                case 'o': ans[3]++;break;
                case 'n': ans[4]+=2;break;
            }
        }        
        return *min_element(ans,ans+5)/2;
    }
};
