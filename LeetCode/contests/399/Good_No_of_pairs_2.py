from typing import List

class Solution:
    def numberOfPairs(self, nums1: List[int], nums2: List[int], k: int) -> int:
        minVal = nums2[0] * k
        counter = 0
        for i in range(len(nums2)):
            nums2[i] *= k
            minVal = min(nums2[i],minVal)
        nums1.sort()
        
        low = 0
        high = len(nums1)
        mid = (high - low)//2 + low
        res = float('inf')
        while low<=high:
            mid = (high - low)//2 + low
            if nums1[mid] < minVal:
                low = mid
            elif nums1[mid] > minVal:
                high = mid
                res = min(mid,res)
                if nums1[res-1] < minVal:
                    break
            else:
                res = mid
                break
        for i in range(res,len(nums1)):
            for j in range(len(nums2)):
                if nums1[i] % nums2[j] == 0:
                    counter += 1
        return counter
                
solution = Solution()
nums1 = list(map(int,input().split()))
nums2 = list(map(int,input().split()))
k = int(input())
print(solution.numberOfPairs(nums1=nums1,nums2=nums2,k=k))