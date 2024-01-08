def avg_continous(arr,k):
    res = []
    initSum = 0

    for i in range(0,k):
        initSum += arr[i]
    res.append((float)(initSum/(i+1)))

    j = 0
    for l in range(i+1,len(arr)):
        initSum += (arr[l] - arr[j])
        res.append(float(format(initSum/k, '.5f')))
        j+=1
    return res

print(avg_continous([1,12,-5,-6,50,3],4))