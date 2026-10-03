class Solution:
    def reverseString(self, s: list[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        st=0
        end=len(s)-1
        while st<=end:
            temp=s[end]
            s[end]=s[st]
            s[st]=temp
            st+=1
            end-=1
        
        