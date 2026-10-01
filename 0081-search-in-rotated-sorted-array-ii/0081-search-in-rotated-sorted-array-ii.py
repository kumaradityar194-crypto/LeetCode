class Solution:
    def search(self, nums: list[int], target: int) -> bool:
        st=0
        end=len(nums)-1
        while st <=end:
            mid=st+(end-st)//2
            if(nums[mid]==target):
                return True
            if(nums[st]==nums[mid] and nums[mid]==nums[end]):
                st+=1
                end-=1
                continue
            if(nums[st]<=nums[mid]):
                if(nums[st]<=target and target <nums[mid]):
                    end=mid-1
                else :
                    st=mid+1
            else :
                if(nums[mid]<target and target <=nums[end]) :
                    st=mid+1
                else:
                    end=mid-1

        return False
        