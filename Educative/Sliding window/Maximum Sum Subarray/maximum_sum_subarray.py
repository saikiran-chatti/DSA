def maximum_sum_subarray(nums,k):
    maxSum = float('-inf')
    initSum = 0
    j = 0
    for i in range(len(nums)):
        initSum += nums[i]
        if i >= k-1:
            maxSum = max(maxSum,initSum)
            initSum -= nums[j]
            j+=1
    return maxSum

print(maximum_sum_subarray([2, 3, 4, 1, 5],2))
