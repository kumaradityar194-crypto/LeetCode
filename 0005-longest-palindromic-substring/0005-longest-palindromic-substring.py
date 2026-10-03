class Solution:
    def string(self, s:str, st:int, end:int)->str:
        while st >=0 and end <len(s) and s[st]==s[end]:
            st-=1
            end+=1
        return s[st+1:end]

    def longestPalindrome(self, s: str) -> str:
        ans=""
        for  i in range(len(s)):
            odd=self.string(s,i,i)
            even=self.string(s,i,i+1)
        
        
            if(len(odd)> len(ans)):
                ans=odd
            if(len(even)> len(ans)):
                ans=even
        return ans
        
        