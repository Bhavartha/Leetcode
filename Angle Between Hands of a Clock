class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        angle_each_num = 30
        angle_each_section = 6
        total=360

        angle_min_hand = (angle_each_section * minutes)%total
        angle_hr_hand = ((hour*angle_each_num)+(angle_each_num*angle_min_hand/total))%total
        
        angle1= abs(angle_min_hand-angle_hr_hand)
        angle2= total-angle1
        return min(angle1,angle2)
