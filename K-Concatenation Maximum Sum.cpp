class Solution {
public:
    
    int M = 1000000007;
    
    int kadane(vector<int>& arr){
        int lm=0;
        int gm=0;        
        for(int i=0;i<arr.size();i++){
            lm=max(lm+arr[i]%M,0);
            gm=max(gm,lm);
        }
        return gm%M;
    }
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n=arr.size();
        int k1=kadane(arr);
        int sum=max(accumulate(arr.begin(),arr.end(),0),0);
        if(k1==sum)
            return k1*k%M;
        for(int i=0;i<n;i++)
            arr.push_back(arr[i]);
        int k2=kadane(arr);
        int temp=0;
        for(int i=0;i<k-2;i++)
            temp=(temp+sum)%M;
        temp=(k2+temp)%M;
        return max(k1,temp);
    }
};
