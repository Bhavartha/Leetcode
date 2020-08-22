class Solution:
    def distanceBetweenBusStops(self, distance: List[int], start: int, destination: int) -> int:
        start,destination = min(start,destination) ,max(start,destination)
        return min(sum(distance[start:destination]),sum(distance[destination:]+distance[:start]))
