class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d1={}
        d2={}
        res=[]
        for i in nums1:
            if i not in d1:
                d1[i]=1
            else:
                d1[i]+=1
        for i in nums2:
            if i not in d2:
                d2[i]=1
            else:
                d2[i]+=1
        for i in d1.keys():
            if i in d2:
                res+=[i]*(min(d1[i],d2[i]))
        return res        
        
