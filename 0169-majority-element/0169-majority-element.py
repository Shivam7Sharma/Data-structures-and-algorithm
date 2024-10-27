class Solution:
    def majorityElement(self, nums: List[int]) -> int:

        n= len(nums)
        if n<2:
            return nums[0]
        d={}
        for i in nums:
            if i in d and d[i]+1<=n//2:
                d[i]+=1
            elif i in d and d[i]+1>n//2:
                return i
            else:
                d[i]=1

        return None
        
            
        