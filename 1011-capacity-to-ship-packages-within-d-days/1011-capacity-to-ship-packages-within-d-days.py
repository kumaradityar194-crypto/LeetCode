class Solution:
    def count(self,v:[list],time:int)->int:
        day=1
        load=0
        for i in range(len(v)):
            if(load+v[i]<=time):
                load+=v[i]
            else:
                day+=1
                load=v[i]
        return day
    def shipWithinDays(self, weights: list[int], days: int) -> int:
        ans=0
        end=sum(weights)
        st=max(weights)
        while st<=end:
            mid=st+(end-st)//2
            day=self.count(weights,mid)
            if(day<=days):
                ans=mid
                end=mid-1
            else:
                st=mid+1
        return ans        