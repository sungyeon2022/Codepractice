class Solution(object):
    def topKFrequent(self, nums, k):
        res = list()
        for i in nums:
            if nums.count(i)>=k:
                if i in res:
                    continue
                else:
                    res.append(i)
        if len(res)>0:
            return res
        else:
            return nums
