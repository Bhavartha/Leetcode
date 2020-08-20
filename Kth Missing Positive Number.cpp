class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0,n=1;
        while(i<arr.size()){
            if(arr[i]==n){
                n++;
                i++;
            }
            else{
                if(!--k) return n;
                n++;
            }
        }
        return arr[i-1]+k;
    }
};
