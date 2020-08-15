class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        int r=img.size();
        int c=img[0].size();
        
        for(int i=0;i<r;i++)
            reverse(img[i].begin(),img[i].end());
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                img[i][j]^=1;
        
        return img;
    }
};
