class Solution:
    def count(self,v:list[int],speed:int)->int:
        time=0
        for i in range(len(v)):
            time+=(v[i]+speed-1)//speed

        return time

    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        ans=0
        st=1
        end=max(piles)
        while(st<=end):
            mid=st+(end-st)//2
            time=self.count(piles,mid)
            if(time <=h):
                ans=mid
                end=mid-1
            else:
                st=mid+1
            
        return ans