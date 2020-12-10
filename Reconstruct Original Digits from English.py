from collections import Counter

class Solution:
    def originalDigits(self, s: str) -> str:
        output=[]
        ctr = dict(Counter(s))
        numbers={'six':'6',
        'two':'2',
        'zero':'0',
        'eight':'8',
        'seven':'7',
        'five':'5',
        'four':'4',
        'one':'1',
        'nine':'9',
        'three':'3'}
        
        while sum(ctr.values())>0:
            if 'x' in ctr and ctr['x']>0:
                _ = 'six'
            elif 'w' in ctr and ctr['w']>0:
                _ = 'two'
            elif 'z' in ctr and ctr['z']>0:
                _ = 'zero'
            elif 'g' in ctr and ctr['g']>0:
                _ = 'eight'
            elif 's' in ctr and ctr['s']>0:
                _ = 'seven'
            elif 'v' in ctr and ctr['v']>0:
                _ = 'five'
            elif 'f' in ctr and ctr['f']>0:
                _ = 'four'
            elif 'o' in ctr and ctr['o']>0:
                _ = 'one'
            elif 'n' in ctr and ctr['n']>0:
                _ = 'nine'
            else:
                _ = 'three'
            output.append(int(numbers[_]))
            for __ in _:
                ctr[__]-=1
        return ''.join([str(o) for o in sorted(output)])
