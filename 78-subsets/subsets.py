import itertools
class Solution(object):
    def subsets(self, nums):
        listo=[nums, []]
        for i in range(1,len(nums)):
            for j in list(itertools.combinations(nums,i)):
                listo.append(list(j))
        return listo