def longest_substring(nums,k):
    s = {}
    res = 0
    j = 0
    for i in range(len(nums)):
        if nums[i] not in s:
            s[nums[i]] = 1
        else:
            s[nums[i]]+= 1
        while len(s) > k and j < len(nums):
            s[nums[j]]-=1
            if s[nums[j]] == 0 :
                del s[nums[j]] 
            j += 1
        res = max(res,i-j+1)
    if res == 0: return -1
    return res

print(longest_substring("aabacbebebe",3))
