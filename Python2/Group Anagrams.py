# import collections
# class Solution(object):
#     def groupAnagrams(self, strs):
#         res = collections.defaultdict(list)
#
#         for s in strs:
#             count = [0]*26
#             for c in s:
#                 count[ord(c)-ord("a")]+=1
#             res[tuple(count)].append(s)
#         return res.values()
import collections
class Solution(object):
    def groupAnagrams(self, strs):
        res = dict()
        for i in strs:
            chk =''.join(sorted(i))
            if chk in res:
                res[chk].append(i)
            else:
                res[chk]=[i]
        return res.values()
