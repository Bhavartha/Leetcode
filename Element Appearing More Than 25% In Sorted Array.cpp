class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int req = arr.size()/4;
        int t=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                t++;
                if(t>=req) return arr[i];
            }
            else t=0;
        }
        return arr[0];
    }
};
