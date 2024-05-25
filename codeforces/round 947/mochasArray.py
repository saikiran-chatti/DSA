def mochasArray(l):
    i = 1
    start = l[0]

    if l[i] >= l[i-1]:
        while i<n and l[i] >= l[i-1]:
            i += 1
        while i<n:
            if l[i] > start:
                return "No"
            i+=1
    else:
        while i<n and l[i] <= l[i-1]:
            i += 1
        while i<n:
            if l[i] < start:
                return "No"
            i += 1
    return "Yes"
    

t = int(input())
for no in range(t):
    n = int(input())
    l = list(map(int, input().split()))

    print(mochasArray(l))