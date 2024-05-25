def permutation_check(string,pattern):
    h = {}
    for i in pattern:
        if i not in h:
            h[i] = 1
        else:
            h[i]+=1
    tmp = h.copy()
    for i in range(len(string)):
        if string[i] in tmp:
            tmp[string[i]]-=1
            if tmp[string[i]] == 0:
                del tmp[string[i]]
            if len(tmp) == 0:
                return True
        else:
            tmp = h.copy()
    return False

print(permutation_check("dcda","adc"))
