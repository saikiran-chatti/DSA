def average_continous(arr,k):
    res = []
    j = 0
    window = 0
    for i in range(len(arr)):
        window += arr[i]
        if i >= k-1:
            res.append(window/k)
            window -= arr[j]
            j+= 1
    return res

print(average_continous([1, 3, 2, 6, -1, 4, 1, 8, 2],5))