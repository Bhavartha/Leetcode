class Solution:
    def corpFlightBookings(self, bookings: List[List[int]], n: int) -> List[int]:
        answer = [0]*n
        for x,y,z in bookings:
            answer[x-1]+=z
            if y<n:
                answer[y]-=z
        for i in range(1,n):
            answer[i]+=answer[i-1]
        return answer
