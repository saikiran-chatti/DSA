def maximumSubArray(arr,k):
    start = 0
    n = len(arr)
    sum = 0
    res = float('-inf')
    for i in range(n):
        sum += arr[i]
        if i >= k-1:
            res = max(res,sum)
            sum -= arr[start]
            start += 1
    return res

arr = list(map(int,input().split()))
k = int(input())
res = maximumSubArray(arr,k)
print(res)