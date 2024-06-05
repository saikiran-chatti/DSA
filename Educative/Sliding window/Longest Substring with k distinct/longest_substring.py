def longest_substring(s,k):
    hMap = {}
    start = 0
    res = 0
    n = len(s)
    for i in range(n):
        hMap[s[i]] = hMap.get(s[i],0) + 1
        while len(hMap) > k:
            res = max(res,i - start)
            hMap[s[start]] -= 1
            if hMap[s[start]] <= 0:
                del hMap[s[start]]
            start += 1
    return res
print(longest_substring("abcdef",3))