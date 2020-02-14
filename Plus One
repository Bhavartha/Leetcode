class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num=0
        for i in digits:
            num=num*10+i
        num+=1
        digits=[]
        while num:
            digits.append(num%10)
            num//=10
        return reversed(digits)
        
#OR

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry=0
        for i in range(len(digits)-1,-1,-1):
            carry,digits[i]=(digits[i]+1)//10,(digits[i]+1)%10
            if not carry:
                return digits
        return [1]+digits
