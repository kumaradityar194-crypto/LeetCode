class Solution:
    def thirdMax(self, nums: list[int]) -> int:
        if(len(nums)<3):
           return max(nums)

        nums.sort()
        count=1
        for i in range(len(nums)-2, -1, -1):
            if(nums[i]!=nums[i+1]):
                count+=1
            if(count==3):
                return nums[i]
        
        return nums[-1]
        
        