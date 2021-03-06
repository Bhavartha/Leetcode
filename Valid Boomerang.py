class Solution:
    def isBoomerang(self, p: List[List[int]]) -> bool:

        def distance(x1,x2,y1,y2):
            a = (x1-x2)**2
            b= (y1-y2)**2
            return (a+b)**0.5
        
        a =  distance(p[0][0],p[1][0],p[0][1],p[1][1])
        b =  distance(p[0][0],p[2][0],p[0][1],p[2][1])
        c =  distance(p[2][0],p[1][0],p[2][1],p[1][1])
        
        return (a+b)>c and (a+c)>b and (b+c)>a

OR

class Solution:
    def isBoomerang(self, p: List[List[int]]) -> bool:

        slope1 = (p[1][1]-p[0][1])*(p[1][0]-p[2][0])
        slope2 = (p[1][1]-p[2][1])*(p[1][0]-p[0][0])
        
        return slope1!=slope2
