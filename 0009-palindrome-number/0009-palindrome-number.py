class Solution:
    def isPalindrome(self, x: int) -> bool:
        if(x<0):
            return False
        h=x
        m=0
        while(h>0):
            m = m * 10 + h%10
            h=h//10
        
        if(m!=x):
            return False
        return True