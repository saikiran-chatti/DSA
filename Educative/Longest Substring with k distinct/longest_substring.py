def longest_substring(nums,k):
    start = 0
    s = set()
    res = 0
    j = 0
    for i in range(len(nums)):
        s.add(nums[i])
        if len(s) == k and j == 0:
            j = i+1
        if len(s) > k:
            res = max(res,i-start)
            start = j
            s.clear()
    return res
print(longest_substring("aabbcc",3))
