def fruits_into_baskets(arr):
    n = len(arr)
    if n <= 2:
        return n
    res = 0
    count = 2
    a = arr[0]
    b = arr[1]
    i = 2
    while i < n:
        while i < n and arr[i] == a or arr[i] == b:
            count += 1
            i += 1
        res = max(res,count)
        count = 0
        a = arr[i] if i < n else -1
        b = arr[i + 1] if i + 1 < n else -1
        # i += 1
    return res

arr = list(map(int,input().split()))
print(fruits_into_baskets(arr=arr))