class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        diff = []
        i = 0
        n = len(s)
        total = 0
        count = 0
        res = 0
        start = 0

        for i in range(n):
            diff.append(abs(ord(s[i])-ord(t[i])))
        i = 0
        for i in range(n):
            total += diff[i]
            count += 1
            while total > maxCost:
                total -= diff[start]
                count -= 1
                start += 1
            res = max(res,count)
        return res


solution = Solution()
s = input()
t = input()
maxCost = int(input())
print(solution.equalSubstring(s,t,maxCost))