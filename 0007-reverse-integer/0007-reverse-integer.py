class Solution:
    def reverse(self, x: int) -> int:
        n=x
        if(x < 0):
            n=-x

        m=0
        while(n>0):
            m=m*10+n% 10
            if( m >2**31-1 or m < -2**31):
                return 0
            n=n//10

        if(x< 0):
            m=-m
        return m


        