class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        s=sum(nums)
        l=0
        for i in range(len(nums)):
            r=s-l-nums[i]
            if l==r:
                return i
            l+=nums[i]
        return -1