class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
       left = float('-inf')
       for i in range(len(nums)):
        left = max(left , nums[i])

        right = float('inf')
        for j in range(i , len(nums)):
                right = min(right , nums[j])

        if left-right<=k :
             return i
       return -1

        