class Solution(object):
    def topKFrequent(self, nums, k):
        count = {}
        freq =[[]for i in range(len(nums)+1)]
        for n in nums:
            count[n] = 1 + count.get(n, 0)
        print(count)
        res = []
        for i in range(len(freq) - 1, 0, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res




a = [3,0,1,0]
b = 1
sc = Solution()
print(sc.topKFrequent(a, b))