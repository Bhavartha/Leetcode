class Solution:
    def trap(self, arr: List[int]) -> int:
        n = len(arr)
        ans = 0
        l=0
        while l<n-1:
            mxi=l+1
            r=l+1
            while r<n:
                if arr[r]>=arr[l]:
                    mxi = r
                    break
                elif arr[r]>=arr[mxi]:
                    mxi = r
                r+=1
            mn = min(arr[l],arr[mxi])
            for i in range(l+1,mxi):
                ans+= max(0,mn-arr[i])
            l=mxi
        return ans
