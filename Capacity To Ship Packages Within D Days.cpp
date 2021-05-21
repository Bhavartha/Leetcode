class Solution {
public:
    int poss(vector<int>& w, int d,int m){
        int x=1;
        int s=0;
        for(auto i:w){
            if(s+i<=m)
                s+=i;
            else{
                x++;
                s=i;
            }
        }
        return x;
    }
    
    int shipWithinDays(vector<int>& w, int d) {
        int l= *max_element(w.begin(),w.end());
        int h= accumulate(w.begin(),w.end(),0);
        while(l<h){
            int m = l+(h-l)/2;
            int r = poss(w,d,m);
            if(r>d)
                l=m+1;
            else
                h=m;
        }
        return l;
    }
};
