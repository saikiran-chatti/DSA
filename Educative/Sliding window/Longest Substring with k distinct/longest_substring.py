def longest_substring(nums,k):
    s = {}
    start = 0
    res = 0
    n = len(nums)
    for i in range(n):
        if nums[i] in s:
            s[nums[i]] += 1
        else:
            s[nums[i]] = 1
        while len(s) > k:
            s[nums[start]] -= 1
            if s[nums[start]] == 0:
                del s[nums[start]]
            start+=1
        res = max(res,i-start+1)
    return res

print(longest_substring("abcdef",6))