class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        lis=s.split(" ")
        for i in range(len(lis)-1,-1,-1):
            if(len(lis[i])>0):
                return len(lis[i])

        return None
        