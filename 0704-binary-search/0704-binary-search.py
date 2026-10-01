class Solution:
    def bs(self,st:int, end:int, nums:list[int] , target :int) ->int:
        while st <=end:
            mid=st+(end-st)//2
            if(nums[mid]==target):
                return mid
            if(nums[mid]<target):
                st=mid+1
            else:
                end=mid-1
            
        return -1
    def search(self, nums: list[int], target: int) -> int:
        return self.bs(0,len(nums)-1,nums,target)
        