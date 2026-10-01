class Solution:
    def mySqrt(self, x: int) -> int:
        r=0
        l=x
        ans=0
        while(r<=l):
            mid=r+(l-r)//2
            se=mid*mid
            if(se==x):
                return mid
            if(se<x):
                ans=mid
                r=mid+1
            else :
                l=mid-1
        return ans