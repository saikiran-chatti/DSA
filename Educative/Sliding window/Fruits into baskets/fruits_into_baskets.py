def fruitsIntoBaskets(fruits):
    start = 0
    res = 0
    s = {}
    for i in range(len(fruits)):
        if fruits[i] in s:
            s[fruits[i]] += 1
        else:
            s[fruits[i]] = 1
        while len(s) > 2:
            s[fruits[start]]-=1
            if s[fruits[start]] == 0:
                del s[fruits[start]]
            start+=1
        res = max(res,i-start+1)
    return res

print(fruitsIntoBaskets(['A', 'B', 'C', 'A', 'C']))