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

arr = list(int(i) for i in input().split())
k = int(input())
res = findSubArraySum(arr,k)
print(res)
