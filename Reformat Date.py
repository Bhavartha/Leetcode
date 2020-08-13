class Solution:
    def reformatDate(self, date: str) -> str:
        months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]        
        dd,mm,yy = date.split()
        mm=str(months.index(mm)+1).zfill(2)
        dd=dd[:-2].zfill(2)
        return f"{yy}-{mm}-{dd}"
