class Solution:
    def myPow(self, x: float, n: int) -> float:
        l=n
        if(n<0):
            l=-l
        
        if(x==1):
            return x
        
        ans=1
        while(l > 0):
            if(l % 2==1):
                ans*=x
            x*=x
            l=l//2
        if(n < 0):
            ans=1/ans
        return ans
        