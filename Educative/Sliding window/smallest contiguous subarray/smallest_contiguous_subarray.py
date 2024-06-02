def smallestSubArrayWithGivenSum(arr,s):
    n = len(arr)
    sum = 0
    start = 0
    res = n
    for i in range(n):
        sum += arr[i]
        while sum >= s:
            res = min(res,(i-start+1))
            sum -= arr[start]
            start += 1
    return res
            

arr = list(map(int,input().split()))
s = int(input())
res = smallestSubArrayWithGivenSum(arr,s)
print(res)