class Solution:
    def multiply(self, s1: str, s2: str) -> str:
        ans=0
        multiplier=1
        for i in s1[::-1]:
            temp=0
            c=0
            m=1
            for j in s2[::-1]:
                n1 = ord(j)-ord('0')
                n2 = ord(i)-ord('0')
                temp += m*((n1*n2+c)%10)
                c= (n1*n2+c)//10
                m*=10
            ans+= (c*m + temp)*multiplier
            multiplier*=10
        return str(ans)
