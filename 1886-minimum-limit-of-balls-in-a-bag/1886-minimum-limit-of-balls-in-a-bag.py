class Solution:
    def minimumSize(self, nums: List[int], maxOperations: int) -> int:

        def possop(i):
            ops=0
            for num in nums:
                ops+=(ceil(num/i) -1)
                if ops>maxOperations:
                    return False
            return True

        l=1
        r= max(nums)

        while l<r:
            mid= l+ (r-l)//2

            if possop(mid):
                r= mid
            else:
                l= mid+1

        return r
        