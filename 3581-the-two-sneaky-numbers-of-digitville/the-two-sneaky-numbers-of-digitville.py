class Solution(object):
    def getSneakyNumbers(self, nums):
        listo = set()
        for i in set(nums):
            if nums.count(i)>1:
                listo.add(i)
        return list(listo)
