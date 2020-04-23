class Solution:
    def maxRotateFunction(self, array: List[int]) -> int:
        length = len(array)
        arr_sum = sum(array)
        mul_sum  = answer = sum([a*b for a,b in enumerate(array)])
        for a in array:
            mul_sum = mul_sum - arr_sum + (length*a)
            answer = max(answer,mul_sum)
        return answer
