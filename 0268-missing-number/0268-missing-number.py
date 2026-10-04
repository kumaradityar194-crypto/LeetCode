class Solution:
    def missingNumber(self, nums: list[int]) -> int:
        nums.sort()
        n=len(nums)+1
        for i in range(n-1):
            if(nums[i]-i)!=0:
                return i
        return n-1