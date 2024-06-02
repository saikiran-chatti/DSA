def findSubArraySum(arr,k):
    n = len(arr)
    sum = 0
    start = 0
    res = []

    for i in range(n):
        sum += arr[i]
        if i >= k-1:
            res.append(sum/k)
            sum -= arr[start]
            start += 1

    return res

arr = [1, 3, 2, 6, -1, 4, 1, 8, 2]
k = 5
res = findSubArraySum(arr,k)
print(res)
