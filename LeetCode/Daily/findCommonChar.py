from typing import List

def commonChars(words: List[str]) -> List[str]:
    i = 0
    n = len(words)
    res = ''.join(sorted(words[0]))
    while i < n:
        sw = ''.join(sorted(words[i]))
        print(sw,res)
        while res not in sw:
            res = res[:-1]
        i += 1
    return list(res)

words = ["bella","label","roller"]
print(commonChars(words))