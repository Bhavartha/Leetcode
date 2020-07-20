class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> seen;
        for(int i=0;i<arr.size();i++){
            if(seen.find(arr[i]*2)!=seen.end() || (seen.find(arr[i]/2)!=seen.end()) && arr[i]%2==0)
                return true;
            seen.insert(arr[i]);
        }
        return false;
    }
};
