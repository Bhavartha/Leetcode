class Solution:
    def distributeCandies(self, candies: int, num_people: int) -> List[int]:
        result = [0]*num_people
        
        count=1
        i=0
        while candies:
            i%=num_people
            if count<=candies:
                result[i]+=count
                candies-=count
            else:
                result[i]+=candies
                break
            count+=1
            i+=1
        return result
            
