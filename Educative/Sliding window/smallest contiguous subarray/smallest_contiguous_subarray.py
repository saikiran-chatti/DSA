def smallest_contiguous_subarray(nums,s):
    k = float('inf')
    initSum = 0
    j = 0
    counter = 0
    for i in range(len(nums)):
        initSum += nums[i]
        counter += 1
        while(initSum >= s):
            initSum -= nums[j]
            k = min(counter,k)
            counter -= 1
            j += 1
    if k == float('inf'):
        return 0
    return k

print(smallest_contiguous_subarray([3, 4, 1, 1, 6],8))