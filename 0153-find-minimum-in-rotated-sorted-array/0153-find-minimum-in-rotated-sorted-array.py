class Solution:
    def findMin(self, nums: list[int]) -> int:
        st=0
        end=len(nums)-1
        while st<=end:
            mid=st+(end-st)//2
            if(nums[st]<=nums[mid]):
                if(nums[mid]<=nums[end]):
                    return nums[st]
                else :
                    st=mid+1
            else :
                end=mid
        
        return nums[st]