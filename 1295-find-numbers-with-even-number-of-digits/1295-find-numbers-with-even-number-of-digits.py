class Solution:
    def findNumbers(self, nums):
        n = len(nums)
        count = 0
        vv = 0
        ans = 0

        for i in range(n):
            v = nums[i]
            vx = 0

            while v > 0:
                v //= 10
                count += 1

            if count % 2 == 0:
                ans += 1

            count = 0

        return ans
        