class Solution:
    def intToRoman(self, num: int) -> str:
        integer = [1000,900,500,400,100,90,50,40,10,9,5,4,1]
        roman = ['M','CM','D','CD','C','XC','L','XL','X','IX','V','IV','I']
        
        ans=""
        for i in range(13):
            m = num//integer[i]
            ans+= roman[i]*m
            num%=integer[i]
        return ans
            
