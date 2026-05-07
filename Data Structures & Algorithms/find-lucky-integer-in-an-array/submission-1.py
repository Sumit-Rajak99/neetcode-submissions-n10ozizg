from collections import Counter

class Solution:
    def findLucky(self, arr):

        count = Counter(arr)

        ans = -1

        for num in count:

            if num == count[num]:

                ans = max(ans, num)

        return ans