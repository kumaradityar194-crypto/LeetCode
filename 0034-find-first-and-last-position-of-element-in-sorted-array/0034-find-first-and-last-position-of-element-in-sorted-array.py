class Solution:
    def searchRange(self, nums: list[int], target: int) -> list[int]:
        first=-1
        last=-1
        st=0
        end=len(nums)-1
        while st<=end:
            mid=st+(end-st)//2
            if(nums[mid]==target):
                first=mid
                end=mid-1
            elif(nums[mid]<target):
                st=mid+1
            else :
                end=mid-1
        
        st=0
        end=len(nums)-1
        while(st<=end):
            mid=st+(end-st)//2
            if(nums[mid]==target):
                last=mid
                st=mid+1
            elif(nums[mid]<target):
                st=mid+1
            else :
                end=mid-1

        return [first,last]