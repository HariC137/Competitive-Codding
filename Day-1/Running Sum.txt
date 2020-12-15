#Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

#Return the running sum of nums.

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        ans = []
        s= nums[0]
        for i in range(0,len(nums)):
            if i == 0:
                ans.append(nums[i])
            else:
                s += nums[i]
                ans.append(s)
        return ans
#https://leetcode.com/submissions/detail/430241706/            