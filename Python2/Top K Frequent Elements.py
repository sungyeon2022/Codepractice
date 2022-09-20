class Solution(object):
    def topKFrequent(self, nums, k):
        count = {}
        freq =[[]for i in range(len(nums)+1)]
        for n in nums:
            count[n] = 1 + count.get(n, 0)
        for n, c in count.items():
            freq[c].append(n)

        res = []
        for i in range(len(freq) - 1, 0, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res
        print(res)


a = [1,1,1,2,2,3]
b = 2
sc = Solution()
sc.topKFrequent(a, b)